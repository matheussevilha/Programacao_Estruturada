#include <stdio.h>

int main ()
{
	int num_dez[11];
	for(int i = 0; i < 10; i++)
	{
		printf("Digite os nmrs de 1 a 10: ");
		scanf(" %d", &num_dez[i]);
	}
	for(int i = 0; i < 10; i++)
	{
		printf("%d ", num_dez[i]);
	}	
	
	return(0);	
}