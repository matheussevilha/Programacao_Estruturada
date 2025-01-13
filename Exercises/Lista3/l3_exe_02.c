/*Leia um número n, onde 1 ≤ n ≤ 10, e então leia uma matriz quadrada M[n][n]. Na sequência, leia um caractere c. Caso c = "S", calcule a 
soma dos elementos da diagonal principal da matriz M. Caso c = "M", então calcule a média dos elementos que estão acima da diagonal.*/

#include <stdio.h>

int main()
{
    //Tamanho da matriz
    int n;
    printf("Digite o tamanho da matriz quadrática: ");
    scanf("%d", &n);

    //Gerando a matriz
    int matriz[n][n];
    for(int linha = 0; linha < n; linha ++)
        for (int coluna = 0; coluna < n; coluna++)
        {
            printf("Digite o valor da linha %d e coluna %d: ", linha+1, coluna+1);
            scanf("%d", &matriz[linha][coluna]);
        }
    putchar('\n');

    //Visualizaçao da matriz
    printf("Matriz formada: \n\n");
    for(int linha = 0; linha < n; linha ++)
        {
            for (int coluna = 0; coluna < n; coluna++)
            {
                printf("%d", matriz[linha][coluna]);
            }
            putchar('\n');
        }

    putchar('\n');
    //Verificando tipo de soma
    char tsoma;
    printf("Para somar os números da diagonal, digite \"S\", para somar os valores acima da diagonal, digite \"M\".\n");
    scanf(" %c", &tsoma);

    //Somando de acordo com o tipo de soma desejado
    int soma = 0;
    if(tsoma == 'S')
    {
        for(int diagonal = 0; diagonal < n; diagonal++)
            soma += matriz[diagonal][diagonal];
        printf("Resultado da soma: %d", soma);
    }
    else if(tsoma == 'M')
    {
        for(int linha = 0; linha < n; linha ++)
            for(int coluna = linha + 1; coluna < n; coluna++)
                soma += matriz[linha][coluna];
        printf("Resultado da soma: %d", soma);
    }
    else
    {
        printf("Letra nao reconhecida!");
    }

    return 0;
}