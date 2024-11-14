/*
Escreva uma função em C que compute o valor de 
( n )
( k )
, onde 0 ≤ k ≤ n e n, k ∈ N.
*/

#include <stdio.h>

// Funçao para cálculo de fatorial
int fatorial(int num)
{
    int soma = 1;
    for(int i = 2; i <= num; i++)
    {
        soma = soma * i;
    }
    return(soma);
}

// Funçao para o cáculo do binomio de Newton
int binomio_newton(int n, int k)
{
    int calculo = fatorial(n) / (fatorial(k)*fatorial(n-k));
    return(calculo);

}

int main()
{
    int num1; int num2;
    printf("Digite os valores para serem utilizados no cálculo do binomio de Newton: \n");
    scanf("%d", &num1);
    scanf("%d", &num2);
    printf("%d", binomio_newton(num1, num2));
    return(0);
}