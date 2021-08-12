#include <stdio.h>

#define PI 3.1415

void main(void) {
	
	float raio, area, perimetro;
	
	printf("Digite o raio da circunferencia: \n");
	scanf("%f", &raio);
	
	area = PI * (raio * raio);
	
	perimetro = 2 * PI * raio;
	
	printf("Area = %.3f\nPerimetro = %.3f", area, perimetro);
	
}
