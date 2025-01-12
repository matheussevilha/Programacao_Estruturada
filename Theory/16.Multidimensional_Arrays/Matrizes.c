#include <stdio.h>

int main()
{
    int matriz[3][3];
    int linha, coluna;

    //inicializando o vetor multidimensional
    for(linha = 0; linha < 3; linha++)
        for(coluna = 0; coluna < 3; coluna++)
            matriz[linha][coluna] = 0;
    
    matriz[1][1] = 6;

    //printando a matriz
    for(linha = 0; linha < 3; linha++)
    {
        for(coluna = 0; coluna < 3; coluna++)
            printf("%d",matriz[linha][coluna]);
        putchar('\n');
    } 

    return 0;
}