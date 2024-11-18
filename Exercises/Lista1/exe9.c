#include <stdio.h>

void produto_hadamard(double u[], double v[], double result[], int n)
{
	for(int i = 0; i < n; i++)
	{
		result[i] = u[i] * v[i];
	} 	
}

int main()
{
	
	int n;	
	printf("Qual tamanho do vetor?\n->");
	scanf("%d", &n);
	putchar('\n');

	double u[n], v[n], result[n];
	
	printf("Digite os números do primeiro vetor: ");
	for(int i = 0; i < n; i++)
	{
		scanf("%lf", &u[i]);
	}
	
	printf("Digite os números do segundo vetor: ");
	for(int i = 0; i < n; i++)
	{
		scanf("%lf", &v[i]);
	}
	
	produto_hadamard(u, v, result, n);
	printf("Vetor resultado do produto de Hadamard:\n");
    	for (int i = 0; i < n; i++)
	{
        	printf("%.2lf ", result[i]);
    	}
	return(0);	
}
