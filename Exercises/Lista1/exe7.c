/*
Escreva um programa que leia dois inteiros i e j, onde i ≤ j, e que imprima todos os
números primos no intervalo [i, j].
*/

#include <stdio.h>

int num_primo(int n)
{   
    int verify = 1;
    for(int i = n - 1; i > 1; i--)
    {
        if(n % i == 0)
        {
            verify = 0;
            break;
        }
    }
    return(verify);
}

int main()
{
    int num1, num2;
    printf("Digite os valores para i e j:\n");
    scanf(" %d", &num1);
    scanf(" %d", &num2);
    for(int j = num1; j <= num2; j++)
    {
        if(num_primo(j))
        {
            printf("%d ", j);
        }
    }
    return(0);
    
}