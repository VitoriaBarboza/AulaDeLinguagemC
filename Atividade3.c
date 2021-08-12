#include <stdio.h>

int main(void) {
	float temperaturaF, celsius;
	
	printf("Digite a temperatura em fahrenheit: ");
	scanf("%f", &temperaturaF);
	
	celsius = (temperaturaF - 32) * 5/9;
	printf(" Temperatura em graus celsius: %f\n", celsius);
	
	return 0;
}