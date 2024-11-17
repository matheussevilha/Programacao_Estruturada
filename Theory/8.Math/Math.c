#include <stdio.h>
#include <math.h>

float potencia(float n, float m)
{
	return(pow(n, m));

}

int main()
{
	float f, g;
	printf("Digite um número: ");
	scanf("%f", &f);
	printf("Digite outro número: ");
	scanf("%f", &g);
	printf("%.1f elevado à %.1f = %.1f\nRaiz quadrada de %1.f = %1.f", f, g, potencia(f,g), potencia(f,g), sqrt(potencia(f,g)));
	return(0);
}