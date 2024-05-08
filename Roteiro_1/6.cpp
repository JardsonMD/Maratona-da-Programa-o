#include <stdio.h>
#include <stdlib.h>

int main(){
	int a, b, c;
	//scanf("%d %d %d", &a, &b, &c);
	while(scanf("%d %d %d", &a, &b, &c) != EOF){
		if(a+b+c == 2 || a+b+c == 1){
			if(a != b && a != c){
				printf("A\n");
			}else if(b != a && b != c){
				printf("B\n");
			}else{
				printf("C\n");
			}
		}else{
			printf("*\n");
		}
	}

	return 0;
}

