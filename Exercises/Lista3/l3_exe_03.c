/*A matriz do jogo Sudoku é uma matriz de inteiros 9 x 9. Para ser uma solução do problema, cada linha e coluna deve conter todos os 
números de 1 a 9. Além disso, se dividirmos a matriz em 9 regiões 3 x 3, cada uma destas regiões também deve conter os números de 1 a 9.
O exemplo abaixo mostra uma matriz que é uma solução do problema.

Escreva um programa que dada uma matriz 9 x 9 preenchida, verifique se ela é uma solução válida do Sudoku.*/

#include <stdio.h>
#include <stdbool.h>

//Verificar se o valor está entre 1 e 9.
int busca_binaria_padrao(int chave)
{
    int valores[]= {1,2,3,4,5,6,7,8,9};
    int ini, fim;
    ini = 0;
    fim = 8;
    while(ini != fim)
    {
        if(chave <= valores[(ini+fim)/2])
        {
            fim = (ini+fim)/2;
        }
        else
        {
            ini = ((ini+fim)/2)+ 1;
        }
    }

    if(valores[ini] == chave)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

//Verificar se o valor n é repetido.
int verifica_repeticao(int valores[], int z,int chave)
{
    bool repetido = false;
    for(int i = 0; i < z; i++)
        if(valores[i] == chave)
            repetido = true;

    if(repetido)
    {
        return false;
    }
    else
    {
        return true;
    }
}

//Verificacao se é válido ou nao (linhas)
int verify_linhas(int matriz[9][9])
{
    //Verificando linhas
    bool verify_l = true;
    for (int linha = 0; linha < 9; linha++)
    {
        int repeticao[] = {0,0,0,0,0,0,0,0,0};
        if(verify_l == false)
            break;
        for(int col = 0; col < 9;col++)
        {
            if(busca_binaria_padrao(matriz[linha][col]) && verifica_repeticao(repeticao, 9, matriz[linha][col]))
            {
                printf("verify linha(linha: %d; coluna: %d): true\n", linha, col);
                repeticao[col] = matriz[linha][col];
            }
            else
            {
                printf("verify linha(linha: %d; coluna: %d): false\n", linha, col);
                verify_l = false;
                break;
            }
        }  
    }
    return verify_l;
}

//Verificacao se é válido ou nao (colunas)
int verify_colunas(int matriz[9][9])
{
    //Verificando colunas
    bool verify_c = true;
    for (int col = 0; col < 9; col++)
    {
            int repeticao[] = {0,0,0,0,0,0,0,0,0};
            if(verify_c == false)
                break;
            for(int linha = 0; linha < 9;linha++)
            {
                if(busca_binaria_padrao(matriz[linha][col]) && verifica_repeticao(repeticao, 9, matriz[linha][col]))
                {
                    printf("verify colunas(linha: %d; coluna: %d): true\n", linha, col);
                    repeticao[linha] = matriz[linha][col];
                }
                else
                {
                    printf("verify colunas(linha: %d; coluna: %d): false\n", linha, col);
                    verify_c = false;
                    break;
                }
            }  
    }
    return verify_c;
}

int main()
{
    int sudoku[9][9];

    //Inserindo a matriz
    printf("Digite a matriz:\n");
    for(int i = 0; i < 9; i++)
        for(int z = 0; z < 9; z++)
            scanf("%d", &sudoku[i][z]);

    //Teste
    

    //Verificando se é válida
    if(verify_colunas(sudoku) && verify_linhas(sudoku))
    {
        printf("CORRETO!");
    }
    else
    {
        printf("INCORRETO!");
    }

    return 1;
}