#include <stdio.h>
#include <string.h>

int main()
{
	//buffers
	char first_name[15], last_name[30], fullname[45];
	
	//strings
	printf("Digite seu primeiro nome: ");
	fgets(first_name, 15, stdin);
	printf("Digite seu segundo nome: ");
	fgets(last_name,30,stdin);

	//concatenando
	strcpy(fullname, first_name);
	strcat(fullname, last_name);

	printf("%s", fullname);
	return(0);
	
}
