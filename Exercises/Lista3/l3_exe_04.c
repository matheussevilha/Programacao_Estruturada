/*Há muito tempo atrás, em uma galáxia muito, muito distante...
Após o declínio do Império, sucateiros estão espalhados por todo o universo procurando por um sabre
de luz perdido. Todos sabem que um sabre de luz emite um padrão de ondas específico: 42 cercado
por 7 em toda a volta. Você tem um sensor de ondas que varre um terreno com N x M células.

Você deve escrever um programa que, dado um terreno N × M, onde 1 ≤ N,M ≤ 20, procura pelo
padrão do sabre de luz nele e reporte a coordenada de todos os sabres encontrados.*/

#include <stdio.h>
#include <stdbool.h>

int busca_sabres(int matriz[20][20], int comprimento, int largura)
{
    int i, j;
    for(i=0;i<comprimento;i++)
        for(j=0;j<largura;j++)
        {
            if(matriz[i][j] == 42)
            {
                if(matriz[i-1][j-1] == 7 && matriz[i-1][j] == 7 && matriz[i-1][j+1] == 7 && matriz[i][j-1] == 7 && matriz[i][j+1] == 7 && matriz[i+1][j-1] == 7 && matriz[i+1][j] == 7 && matriz[i+1][j+1] == 7)
                {
                    printf("Sabre de luz encontrado nas coordenadas x: %d e y: %d", j+1, i+1);
                }
            }
        }
    return 0;
}

int main()
{
    int N, M;
    bool intervalo = true;

    //Inserindo o tamanho do terreno 
    while(intervalo)
    {
        printf("Comprimento do terreno: ");
        scanf("%d", &N);
        printf("Largura do Terreno: ");
        scanf("%d", &M);
        if(N <= 20 && N >= 1 &&  M <= 20 && M >= 1)
        {
            intervalo = false;
        }
        else
        {
            printf("Um dos tamanhos está fora do limite de alcance(20)!!\n\n");
        }
    }
    //Definindo a matriz que simboliza o terreno
    int terreno[20][20];

    printf("Insira as ondas captadas pelo sensor por unidade de comprimento quadrada: \n");
    
    int linha, coluna;
    for(linha=0;linha<N;linha++)
        for(coluna=0;coluna<M;coluna++)
            scanf("%d", &terreno[linha][coluna]);
    
    //Buscando pelos sabres
    busca_sabres(terreno, N, M);

    return 0;
}