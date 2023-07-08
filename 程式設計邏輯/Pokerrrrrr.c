#include<stdio.h>
#include<stdlib.h>
#include <time.h>

int main(){
		
	int Poker[4][13],temp,flower[4][13],num,tmp;
	int i,j,p,s,y;
	
	srand (time(NULL));
	
	for(i=0;i<4;i++){
		for(j=0;j<13;j++){	
			switch (i) {
			case 0:
				flower[i][j] = 0; //¶Â®ç 
				break;
			case 1:
				flower[i][j] = 1; //¬õ¤ß 
				break;
			case 2:
				flower[i][j] = 2; //±öªá 
				break;
			case 3:
				flower[i][j] = 3; //¤è¶ô 
				break;
			}
			Poker[i][j]=j+1;
		}		
	}
	
	for(i=0;i<4;i++){		
		for(y=0;y<13;y++){
			j = rand() % 4;
			s = rand() % 13;			
		
			temp= Poker[i][y];
			Poker[i][y]=Poker[j][s];
			Poker[j][s]= temp;	
		 
			num = flower[i][y];
			flower[i][y]=flower[j][s];
			flower[j][s]= num;
		}	
	}

	for(i=0;i<4;i++){	
		for(j=0;j<13;j++){			
			for(y=0;y<13;y++){
				if(Poker[i][j]<Poker[i][y]){
					
					tmp=Poker[i][j];
					Poker[i][j]=Poker[i][y];
					Poker[i][y]=tmp;
					
					num=flower[i][j];
					flower[i][j]=flower[i][y];
					flower[i][y]=num;
				}
				
				if(flower[i][j]>flower[i][y]){
					
					tmp=Poker[i][j];
					Poker[i][j]=Poker[i][y];
					Poker[i][y]=tmp;
					
					num=flower[i][j];
					flower[i][j]=flower[i][y];
					flower[i][y]=num;
				}								
			}			
		}				
	}
	
	for(p=0;p<4;p++){
		for(y=0;y<13;y++){													
			if (flower[p][y] == 0) {
				printf("%c ",5);
			}
			else if (flower[p][y] == 1) {
				printf("%c ",4);
			}
			else if (flower[p][y] == 2) {
				printf("%c ",3);
			}
			else if (flower[p][y] == 3) {
				printf("%c ",6);
			}
		
			if (Poker[p][y] == 1) {
				printf("A\t");
			}
			else if (Poker[p][y] == 11) {
				printf("J\t");
			}
			else if (Poker[p][y] == 12) {
				printf("Q\t");
			}
			else if (Poker[p][y] == 13) {
				printf("K\t");
			}
			else { 
				printf("%d\t", Poker[p][y]);
			}				
		}	
		printf("\n");	
	}
	
}
