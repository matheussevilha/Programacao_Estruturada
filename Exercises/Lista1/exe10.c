#include <stdio.h>

int soma(int nums[], int qtd)
{
	int soma = 0;
	for(int i = 0; i < qtd; i++)
		soma += nums[i];
	return soma;
}

float media(int soma, int qtd)
{
	float med = soma / qtd;
	return(med);
}

int minimo(int nums[], int qtd)
{
	int min = nums[0];
	for(int i = 1; i < qtd; i++)
	{
		if(nums[i] < min)
		{
			min = nums[i];
		}	
		
	}
	return(min);	
}

int maximo(int nums[], int qtd)
{
	int max = nums[0];
	for(int i = 1; i < qtd; i++)
	{
		if(nums[i] > max)
		{
			max = nums[i];
		}	
		
	}
	return(max);	
}

int main()
{	int qtd;

	//Qtd
	printf("Informe quantos nums irá digitar: ");
	scanf("%d", &qtd);

	int nums[qtd]; 
	//Vetor
	printf("\nDigite os numeros: ");
	int i = 0;
	do
	{
		scanf("%d", &nums[i]);
		i++;
	}
	while(i < qtd);	
	
	//Soma
	int sum = soma(nums, qtd);
	
	//Média
	float med = media(sum, qtd);

	//Máximo
	int max = maximo(nums, qtd);

	//Mínimo
	int min = minimo(nums, qtd);
	
	printf("Média: %1.f\nMáximo: %d\nMínimo: %d\n", med, max, min);
	return(0);
	
	
}





















