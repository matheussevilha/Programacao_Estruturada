#include <stdio.h>
#include <stdbool.h>

bool comparasion (int num)
{
	if(num < 10)
	{
		return(true);
	}
	else
	{
		return(false);
	}
}

int main()
{
	int n;
	printf("Digite um número inteiro: ");
	scanf("%d", &n);
	if(comparasion(n))
	{
		printf("Menor do que 10");
	}
	else
	{
		printf("Maior ou igual a 10");
	}
	return(0);	
}