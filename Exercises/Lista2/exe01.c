#include <stdio.h>

int verify(int chave, int n[], int qtd)
{
	for(int j=0; j < qtd; j++)
	{
		if(n[j]== chave)
		{
			return(j);
		}
		
	}
	return(-1);	
}
int main()
{
	int n;
	printf("Digite a quantidade de numeros no vetor: ");
	scanf("%d", &n);

	int chave;
	printf("Digite a chave: ");
	scanf("%d", &chave);
	
	int valores[n];
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &valores[i]);
	}

	printf("%d", verify(chave, valores, n));
	
	return(0);		
}