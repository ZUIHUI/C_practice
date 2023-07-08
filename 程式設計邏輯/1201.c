#include<stdio.h>
#include<stdlib.h>
#include <time.h>

int main(){
	int Poker[53],temp;
	char S[3];
	int i,j,u;
		
	for(i=1;i<53;i++){
		
		Poker[i] = rand() % 52;
		
		for(j=1j<53;j++){
			if(Poker[i]==Poker[j]){
				i--;
			}
		}			
		//temp = Poker[j];
		//Poker[j]=Poker[i];
		//Poker[i]= temp;	
		
		printf(" %d\t",Poker[i]);
	}
}
