#include <stdio.h>

int cores(int n)
{
	switch(n)
	{
		case 1:
			printf("RED\n");
			break;
		case 2:
			printf("GREEN\n");
			break;
		case 3:
			printf("YELOW\n");
			break;
		default:
			printf("invalid number\n");
		
	}	
	return(0);
}

int main()
{
	int num;
	printf("Escolha uma cor RED[1], GREEN[2], YELOW[3]");
	scanf("%d", &num);
	cores(num);
	return(0);
}




	