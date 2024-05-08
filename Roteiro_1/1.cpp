#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct time{
	char time[15];
	int pont;
}times;


int main(){
	times times[16], oitavas[8], quartas[4], semi[2];
	int i,j;
	
	for(i=0, j= 65; i<16; i++, j++){
		times[i].time[0] =(char)j;
		//printf("Digite o %d%c time: ", i+1, 167);
		//scanf("%s", &times[i].time);
	}
	printf("Digite os placares das Oitavas-De-Final: \n");
	for(i=0; i<16; i+=2){
		printf("Jogo %d: ", i+1);
		scanf("%d %d", &times[i].pont, &times[i+1].pont);
	}
	for(i=0, j=0; i<16; i+=2, j++){
		if(times[i].pont>times[i+1].pont){
			oitavas[j].pont = times[i].pont;
			strcpy(oitavas[j].time, times[i].time);
		}else{
			oitavas[j].pont= times[i+1].pont;
			strcpy(oitavas[j].time, times[i+1].time);
		}
	}
	printf("Digite os placares das Quartas-De-Final: \n");
	for(i=0; i<8; i+=2){
		printf("Jogo %d: ", i+1);
		scanf("%d %d", &oitavas[i].pont, &oitavas[i+1].pont);
	}
	for(i=0, j=0; i<8; i+=2, j++){
		if(oitavas[i].pont>oitavas[i+1].pont){
			quartas[j].pont = oitavas[i].pont;
			strcpy(quartas[j].time, oitavas[i].time);
		}else{
			quartas[j].pont = oitavas[i+1].pont;
			strcpy(quartas[j].time, oitavas[i+1].time);
		}
	}
	printf("Digite os placares das Semifinais: \n");
	for(i=0; i<4; i+=2){
		printf("Jogo %d: ", i+1);
		scanf("%d %d", &quartas[i].pont, &quartas[i+1].pont);
	}
	for(i=0, j=0; i<4; i+=2, j++){
		if(quartas[i].pont>quartas[i+1].pont){
			semi[j].pont = quartas[i].pont;
			strcpy(semi[j].time, quartas[i].time);
		}else{
			semi[j].pont= quartas[i+1].pont;
			strcpy(semi[j].time, quartas[i+1].time);
		}
	}
	printf("Digite o placar da Final: \n");
	scanf("%d %d", &semi[0].pont, &semi[1].pont);
	
	if(semi[0].pont > semi[1].pont){
		printf("O GRANDE CAMPEAO FOI O %s", semi[0].time);
	}else{
		printf("O GRANDE CAMPEAO FOI O %s", semi[1].time);
	}
		
		
		
		
	return 0;	
}
