#include <stdio.h>
#include <stdlib.h>

int main(){
	int x, y, cont = 0;
	scanf("%d %d", &x, &y);
	int vet[x];
	for(int i = 0; i<x; i++){
		scanf("%d", &vet[i]);
		if(vet[i] <= y){
			cont++;
		}
	}
	printf("%d", cont);
	return 0;
}

