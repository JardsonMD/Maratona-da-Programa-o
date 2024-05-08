#include <stdio.h>
#include <stdlib.h>
typedef struct {
	int x,y;
} Local;

int cercado(Local vet[], int ind, int n){
	int i = 0, r = 0, l = 0, u = 0, d = 0;
	int resp = 0;
	while(i < n){
		if(vet[i].x == vet[ind].x - 1 || vet[i].x == vet[ind].x - 2){
			l = 1;
		}
		if(vet[i].x == vet[ind].x + 1 || vet[i].x == vet[ind].x + 2){
			r = 1;
		}
		if(vet[i].y == vet[ind].y - 1 || vet[i].y == vet[ind].y - 2){
			d = 1;
		}
		if(vet[i].y == vet[ind].y + 1 || vet[i].y == vet[ind].y + 2){
			u = 1;
		}
		i++;
		
	}
	if(l == 1 && r == 1 && u == 1 && d == 1){
		resp = 1;
	}
	return resp;
}

int main(){
int n, i;
scanf("%d", &n);
Local caps[n];
for(i = 0; i < n; i++){
	scanf("%d %d", &caps[i].x, &caps[i].y);
}
for(i = 0; i < n; i++){
	if(!cercado(caps, i, n)){
		printf("%d ", i + 1);
	}
}

	return 0;
}

