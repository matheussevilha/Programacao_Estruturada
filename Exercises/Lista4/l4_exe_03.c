/*Escreva um programa que converte os caracteres maiúsculos de uma string em minúsculos e vice-versa. Suponha que só há caracteres latinos
sem acentos.*/

/*Para resolver este problema, vou utilizar a tabela ASCII. Os caracteres maíusculos estao entre 65 e 90, já os minúsculos entre 97 e 122.
Dessa forma, a conversao de um valor para o outro está de acordo com o fator +/- 32.*/

# include <stdio.h>
# include <string.h>

void conversao(char frase[])
{
    int tamanho = strlen(frase);
    for(int i = 0; i < tamanho; i++)
    {
        if(frase[i] > 64 && frase[i] < 91)
        {
            frase[i] += 32;
        }
        else if(frase[i] > 96 && frase[i] < 123)
        {
            frase[i] -= 32;
        }
        else
            continue;
    }
}

int main(void)
{
    char frase[50];
    printf("Digite a frase: ");
    fgets(frase, 50, stdin);
    frase[strlen(frase) - 1] = '\0';

    conversao(frase);

    printf("Frase formatada: \"%s\".", frase);

    return 0;
}