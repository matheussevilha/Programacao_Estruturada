/*
Escreva um programa que leia uma sequência de n números inteiros, 1 ≤ n ≤ 100, e imprima 
esses números em ordem não decrescente. Para isso, você deve obrigatoriamente implementar
a seguinte função
...
*/

#include <stdio.h>

void n_order(int valores[], int n)
{
	for(int i=0; i < n; i++)
	{
		int n_min = i, min = valores[n_min];
		for(int j=0; j < n; j ++)
		{
			if(valores[j] < min)
			{
				min = valores[j];
				n_min = j;
			}
		}

		printf("%d ", valores[n_min]);
		valores[n_min] = 101;
	}	
}

int main()
{
	int n;
	printf("Digite a quantidade de números da lista: ");
	scanf("%d", &n);
	
	int valores[n];
	for(int i = 0; i < n; i++)
		scanf("%d", &valores[i]);

	n_order(valores, n);
	
	return(0);
}
	
