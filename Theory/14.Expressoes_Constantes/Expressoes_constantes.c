#include <stdio.h>
#include <string.h>
#define NOME 15
#define NOME2 30

int main()
{	
	//Buffers
	char first_name[NOME], last_name[NOME2], full_name[NOME + NOME2];

	//Atribuiçao
	printf("Digite seu primeiro nome: ");
	fgets(first_name,NOME,stdin);
	printf("Digite seu útimo nome: ");
	fgets(last_name,NOME2,stdin);
	
	//concat
	strcpy(full_name, first_name);
	strcat(full_name, last_name);
	
	printf("%s", full_name);
	return(0);

	
}