/*
Escreva um programa emC que leia um número n do usuário e imprima todos os números
primos no intervalo [1,n].
*/

#include <stdio.h>

int main()
{
    int n; 
    printf("Digite um número inteiro: ");
    scanf("%d", &n);
    printf("Os números primos do intervalo sao: ");
    // número primo: Divisível somente por 1 e por ele mesmo 
    for(int i = n; i >= 1; i--)
    {
        int verify = 1;
        for(int j = i - 1; j > 1; j--)
        {
            if(i % j == 0)
            {
                verify = 0;
                break;
            }
        }
        if(verify)
            printf("%d ", i);
    }
}