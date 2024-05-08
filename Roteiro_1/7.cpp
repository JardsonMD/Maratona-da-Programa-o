#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int d, n, resp=0, aux=1, sobra;
	
	printf("Digite o nunmero falho e o digito no contrato: ");
	scanf("%d %d", &d, &n);

	while(d!=0 && n!=0){
		if((1<=d && d<=9) && (1<=n && n<pow(10,100)) ){
			while(n != 0){
				sobra = n%10;
				n = n/10;
				if(sobra != d){
					resp += sobra*aux;
					aux*=10;
				}
			}
			printf("%d\n", resp);
			resp = 0;
			aux= 1;
			printf("Digite o nunmero falho e o digito no contrato: ");
			scanf("%d %d", &d, &n);
		}else{
			printf("Valor invalido!!");
		}
	}

	return 0;
}

