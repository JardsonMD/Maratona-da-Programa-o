#include <stdio.h>
#include <stdlib.h>

int main(){
	int n, i, aux1=0, aux2=1, soma=0;
	
	printf("Digite um valor: ");
	scanf("%d", &n);
	if(0<n && n<46){
		printf("%d %d", aux1, aux2);
		for(i=1; i<n-1; i++){
			soma = aux1 + aux2;
			printf(" %d", soma);
			if(aux1 < aux2){
				aux1 = soma;
			}else{
				aux2 = soma;
			}
		}
	}else{
		printf("Valor invalido (valor < 0 ou valor > 45).");
	}


	return 0;
}

