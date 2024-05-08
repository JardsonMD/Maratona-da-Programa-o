#include <stdio.h>
#include <stdlib.h>

int main(){
	int agua, valor=0;
	
	printf("Digite o consumo de agua da recidencia em m%c: ", 252);
	scanf("%d", &agua);
	
	if(agua > 10 && agua < 31){
		valor+=7;
		valor+= (agua-10)*1;
		
	}else if(agua > 30 && agua < 101){
		valor+=27;
		valor+=(agua-30)*2;
		
	}else if(agua > 100){
		valor+=167;
		valor+=(agua-100)*5;
	}else{
		valor+=7;
	}
	printf("O valor total a ser pago sera %dR$.", valor);
	return 0;
}

