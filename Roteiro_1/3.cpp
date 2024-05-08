#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	float raio;
	double area, n= 3.14159;
	
	printf("Digite o raio: ");
	scanf("%f", &raio);
	
	area= n* pow(raio,2);
	printf("A = %0.4lf", area);

	return 0;
}

