/*
Escreva uma função em C que compute o valor de n!, onde n ∈ N.
*/

#include <stdio.h>

int fatorial (int n)
{
    int soma = 1;
    for(int i = 2; i <= n; i++)
    {
        soma = soma * i;
    }
    return(soma);
}

int main()
{
    int num;
    printf("Digite um número natural: ");
    scanf("%d", &num);
    printf("%d fatorial = %d", num, fatorial(num));
    return(0);
}