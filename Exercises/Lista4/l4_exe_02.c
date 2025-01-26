/*Escreva um programa que devolva o tamanho da maior cadeia de 0’s de uma string*/

#include <stdio.h>
#include <string.h>

int cadeia_de_zeros (char cadeia[])
{
    int tamanho = strlen(cadeia), contagem = 0, maior = 0;
    for(int i = 0; i < tamanho; i++)
    {
        if(cadeia[i] == '0')
        {
            contagem += 1;
        }
        else if(cadeia[i] != '0')
        {
            if(contagem > maior)
            {
                maior = contagem;
            }
            contagem = 0;
        }
    }  

    return maior; 
}

int main(void)
{
    //Recebendo sequencia
    char texto[30];
    printf("Digite a sequencia de números: ");
    fgets(texto, 30, stdin);

    //Printando a funçao
    printf("A maior cadeia de zeros na sequencia informada tem %d zeros.", cadeia_de_zeros(texto));

    return 0;
}