/*
 Escreva um programa em C que seja capaz de converter um valor de temperatura entre Celsius e Fahrenheit e 
 vice-versa (pergunte ao usuário qual é unidade de medida da temperatura de entrada e dê o valor convertido para a 
 outra).
*/

#include <stdio.h>

float conversao_celsius(float tF)
{
    float tempC = 5 * ((tF - 32)/9);
    return(tempC);
}

float conversao_farenheit(float tC)
{
    float tempF = ((tC/5) * 9) + 32;
    return(tempF);
}

int main()
{
    char type_temp; float temp;
    printf("Deseja converter para Celsius ou Farenheit? [C/F]");
    scanf("%c", &type_temp);
    if(type_temp == 'C')
    {
        printf("Digite a temperatura em Farenheit: ");
        scanf("%f", &temp);
        printf("%.2f", conversao_celsius(temp));
    }
    else
    {
        printf("Digite a temperatura em Celsius: ");
        scanf("%f", &temp);
        printf("%.2f", conversao_farenheit(temp)); 
    }
    return(0);

}