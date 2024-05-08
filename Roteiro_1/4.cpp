#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	float xUm, xDois, yUm, yDois, cal1, cal2, resp;
	
	printf("Digite x1 e y1: ");
	scanf("%f %f", &xUm, &yUm);
	printf("Digite x2 e y2: ");
	scanf("%f %f", &xDois, &yDois);
	
	cal1= pow((xDois-xUm), 2);
	cal2= pow((yDois-yUm), 2);
	resp= sqrt(cal1 + cal2);
	
	printf("Resultado = %0.4f", resp);

	return 0;
}

