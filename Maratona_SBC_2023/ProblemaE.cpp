#include <stdio.h>
#include <stdlib.h>

int percorre(int vet[], int ind){
	int i = 0, val = 0, comp = 0;
	while(i < ind){
		if(comp < vet[i]){
			comp = vet[i];
			val = i;
		}
		i++;
	}
	return val;
}
int coleta(int val){
	int som = 0;
	while(val != 0){
		som += val%10;
		val = val/10;
	}
	return som;
}

int main(){
int n, k, i, indice, col;
scanf("%d %d", &n, &k);
int flrs[n];
for(i = 0; i<n; i++){
	scanf("%d", &flrs[i]);
}
for(i = 0; i < k; i++){
	
	indice = percorre(flrs, n);
	if(i == k-1){
		printf("%d", coleta(flrs[indice]));
	}else{
		col = coleta(flrs[indice]);
		flrs[indice] -= col;
	}
}
	return 0;
}

