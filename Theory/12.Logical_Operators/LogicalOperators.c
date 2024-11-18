#include<stdio.h>
#include<ctype.h>
#include<math.h>

int iscaps(char c)
{
	if(c < 'A' || c > 'Z')
		return(0);
	else
		return(1);
}


int main()
{
	int l;
	
	do
	{
		l = getchar();
		if(iscaps(l))
			putchar(l);
	}
	while(l != '\n');
	
	return(0);	
}