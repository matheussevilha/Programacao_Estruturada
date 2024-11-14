/*
Escreva um programa emC que leia um número n do usuário e imprima todos os números
pares do intervalo [0,n].
*/


#include <stdio.h>

int main()
{
    int n;
    printf("Digite um número: ");
    scanf("%d", &n);
    for(int i = 0; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d", i);
        }
    }

    return(0);
}
