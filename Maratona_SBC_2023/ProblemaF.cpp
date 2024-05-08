#include <stdio.h>
#include <stdlib.h>

int main(){
	int d, c, r;
	int i = 0, j = 0, cont = 0;
	scanf("%d %d %d", &d, &c, &r);
	int can[c], rev[r];
	for(i = 0; i<c; i++){
		scanf("%d", &can[i]);
	}
	for(i = 0; i<r; i++){
		scanf("%d", &rev[i]);
	}
	i = 0;
	while(i < c){
		if(d > can[i]){
			d -= can[i];
			cont++;
			i++;
		}else{
			if(j == r){
				i = c;
			}else{
				d += rev[j];
				j++;
				cont++;
			}
			
		}
	}
	printf("%d", cont);
	
	return 0;
}

