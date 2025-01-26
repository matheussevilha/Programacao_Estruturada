/*Escreva um programa que receba uma palavra e uma frase como entrada. O programa deve escrever “sim” se a palavra estiver presente na 
frase e “não” caso contrário.*/
#include <stdbool.h>
#include <stdio.h>
# include <string.h>

bool busca_palavra(char p[], char f[])
{
    bool loop = true, verify = false; 
    int i = 0, j = 0, tamanho_f = strlen(f), tamanho_p = strlen(p);

    while(loop)
    {
        if(j == tamanho_p || i == tamanho_f)
        {
            loop = false;
            break;
        }

        if(f[i] == p [j])
        {
            verify = true;
            i += 1;
            j += 1;
        }

        else
        {
            i += 1;
            j = 0;
            verify = false;
        }
    }

    return verify;
}

int main()
{
    char palavra[15], frase[80];
    printf("Digite a frase: ");
    fgets(frase, 80, stdin);

    //Eliminando '\n' de frase
    frase[strlen(frase) - 1] = '\0';

    printf("Digite a palavra: ");
    scanf("%s", palavra);
    
    //Eliminando '\n' do buffer
    getchar();

    if(busca_palavra(palavra, frase))
        printf("sim");
    else 
        printf("nao");


    return 0;
}