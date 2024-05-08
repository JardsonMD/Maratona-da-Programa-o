#include <stdio.h>
#include <stdlib.h>

int main(){
	int n, cem, cinqnt, vinte, dez, cinco, dois, um;
	
	printf("Digite o valor: ");
	scanf("%d", &n);
	
	if(0<n && n<1000000){
		cem = n/100;
		n%=100;
		cinqnt = n/50;
		n%=50;
		vinte = n/20;
		n%=20;
		dez = n/10;
		n%= 10;
		cinco = n/5;
		n%= 5;
		dois = n/2;
		n%= 2;
		um = n/1;
		n%= 1;
		
		printf("%d nota(s) de R$ 100,00\n", cem);
		printf("%d nota(s) de R$ 50,00\n", cinqnt);
		printf("%d nota(s) de R$ 20,00\n", vinte);
		printf("%d nota(s) de R$ 10,00\n", dez);
		printf("%d nota(s) de R$ 5,00\n", cinco);
		printf("%d nota(s) de R$ 2,00\n", dois);
		printf("%d nota(s) de R$ 1,00\n", um);
	}else{
		printf("Valor invalido!");
	}
	
	
	
	
	return 0;
}

