/*Escreva um programa que recebe um caractere e uma frase e imprima a frase fornecida
até a primeira ocorrência do caractere fornecido. O seu programa funciona corretamente mesmo que
o caractere fornecido não apareça na frase? Veja o exemplo abaixo.*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int print_conditional(char a, char b[])
{
    int tamanho = strlen(b);
    int i;
    for(i = 0; i < tamanho; i++)
    {
        if(b[i] == a)
        {
            putchar('\n');
            break;
        }
        else
        {
            printf("%c", b[i]);
        }
    }
        
    return 0;
}

int main()
{
    //Recebendo caracter
    char c, frase[80];
    printf("Digite o caracter: ");
    scanf("%c", &c);

    //Eliminando '\n' do buffer
    getchar();

    //Receendo a frase
    printf("Digite a frase: ");
    fgets(frase, 80, stdin);
    frase[strlen(frase) - 1] = '\0';

    //Funçao print até o caracter
    printf("Frase até o caracter: \n");
    print_conditional(c, frase);

    return 0;
}