/*
Escreva um programa em C que leia um número inteiro n fornecido pelo usuário e imprima Fn, onde Fn é o n-ésimo número
de Fibonacci
*/

#include <stdio.h>

// O próximo número é soma dos 2 anteriores
int fibonacci(int n)
{
    int a1 = 0, a2 = 1, a3;
    if(n == 1)
    {
        return(a1);
    }
    else if (n == 2)
    {
        return(a2);
    }
    else
    {
        for(int i = 3; i <= n; i++)
        {
            a3 = a1 + a2;
            a1 = a2;
            a2 = a3;
        }
        return(a3);
    }

}

int main()
{   
    int termo;
    printf("Qual termo da sequencia de Fibonacci deseja saber?\n");
    scanf("%d", &termo);
    printf("%d ", fibonacci(termo));
}