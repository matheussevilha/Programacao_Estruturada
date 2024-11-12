#include<stdio.h>
int main()
{
    //Valor inteiro
    int x;
    printf("Digite um número inteiro: ");
    scanf("%d", &x);
    printf("O número digitado foi: %d\n", x);

    //Valor decimal
    float y; 
    printf("Digite um número: ");
    scanf("%f", &y);
    printf("O número digitado foi: %f\n", y);

    //Valor texto
    char z;
    printf("Digite uma letra: ");
    scanf(" %c", &z);
    printf("A letra digitada foi: %c\n", z);

    return(0);
}