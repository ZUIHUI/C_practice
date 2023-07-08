#include<stdio.h>
#include<stdlib.h>
#include <time.h>

int main(){
		
	int Poker[52],temp,flower[52],num;
	int i,j,p,s,a;
	int pp,qq;
	
	srand (time(NULL));
	
	for(i=0;i<52;i++){
		s=i/13;
		
		switch (s) {
		case 0:
			flower[i] = 0; //黑桃 
			break;
		case 1:
			flower[i] = 1; //紅心 
			break;
		case 2:
			flower[i] = 2; //梅花 
			break;
		case 3:
			flower[i] = 3; //方塊 
			break;
		}
		
		Poker[i]=i % 13 + 1;	
	}
	
	for(i=0;i<52;i++){
		
		j = rand() % 52;
		//交換牌	
		temp = Poker[i];
		Poker[i]=Poker[j];
		Poker[j]= temp;	
		//交換花色 
		num = flower[i];
		flower[i]=flower[j];
		flower[j]= num;		
	}
	for(p=0;p<52;p++){
		
		if (flower[p] == 0) {
			printf("%c ",5);
		}
		else if (flower[p] == 1) {
			printf("%c ",4);
		}
		else if (flower[p] == 2) {
			printf("%c ",3);
		}
		else if (flower[p] == 3) {
			printf("%c ",6);
		}
		
		if (Poker[p] == 1) {
			printf("A\t");
		}
		else if (Poker[p] == 11) {
			printf("J\t");
		}
		else if (Poker[p] == 12) {
			printf("Q\t");
		}
		else if (Poker[p] == 13) {
			printf("K\t");
		}
		else { 
			printf("%d\t", Poker[p]);
		}
				
		if((p+1)%13==0){
			printf("\n");
		}		
	}
	printf("\n");
}
