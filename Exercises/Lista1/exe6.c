/*
Escreva um programa que leia um inteiro n e imprima os n primeiros números primos.
*/
#include <stdio.h>

int numero_primo(int n)
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
    int quantidade, soma = 0;
    printf("Digite a quantidade de numeros primos que deseja exibir: ");
    scanf("%d", &quantidade);
    for(int i = 1; soma < quantidade; i++)
    {
        if(numero_primo(i))
        {
            printf(" %d", i);
            soma += 1;
        }
    }
    return(0);
}
