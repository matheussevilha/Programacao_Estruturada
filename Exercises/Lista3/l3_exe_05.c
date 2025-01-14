#include <stdio.h>
#include <stdbool.h>
#define MAX 100

int preenchimento_matriz(int ordem,int matriz[MAX][MAX])
{
    int i, coluna, linha;
    for(i = 0; i < ordem; i++)
    {
        for(linha=0;linha<ordem;linha++)
            for(coluna=0; coluna<ordem; coluna++)
            {
                if(linha >= i && coluna >= i && linha <= ordem-1-i && coluna <= ordem-1-i)
                {
                    if(linha == i || coluna == i || linha == ordem - 1 -i || coluna ==ordem -1 -i)
                    {
                        matriz[linha][coluna] = i + 1;
                    }
                }
            }
    }
    return 0;
}

int main()
{
    int ordem;
    do
    {
        printf("Digite a ordem da matriz desejada (entre 1 e 100): ");
        scanf("%d", &ordem);
        if(ordem > 100 || ordem < 1)
        {
            printf("O valor está fora dos limites.\n\n");
        }
    }
    while(ordem > 100 || ordem < 1);

    int matriz[MAX][MAX];

    //Preenchedo a matriz
    preenchimento_matriz(ordem, matriz);

    //Exibindo a matriz
    for(int i=0; i<ordem;i++)
    {
        for(int j=0;j<ordem;j++)
        {
            printf("%d", matriz[i][j]);
        }
        putchar('\n');
    }
    return 0;
}