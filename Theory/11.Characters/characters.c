#include<stdio.h>
#include<ctype.h>

/*
void maiuscula(void)
{
	int a;
	do
	{
		a = getchar();
		putchar(toupper(a));
	}
	while(a != '\n');
}
*/

void maiuscula_2(void)
{
	char a = 'a';
	while(a != '\n')
	{
		char i;
		scanf("%c", &i);
		printf("%c", toupper(i));
		a = i;
	}
	putchar('\n');
}

int main()
{
	maiuscula_2();
	return(0);
}
