#include<stdio.h>

int main()
{
    int c; int b;
    printf("Digite uma letra:");
    c = getchar();
    b = getchar();
    printf("Voce digitou:\n");
    putchar(c);
    putchar('\n'); 
    putchar(b);
    putchar('\n');
    return 0;

}