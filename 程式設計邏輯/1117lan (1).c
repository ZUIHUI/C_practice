#include<stdio.h>
#include<stdlib.h>

int main(){
	printf("======01======\n");
	a1();
}
void a1(){
	char Phone[5][64],Name[5][64],x;
	int a,q=0,i;
	while(x!='N'){
		q++;	
		if(q>5){	
			for(i=0;i<5;i++){
				strcpy(Name[i], Name[i+1]);
				strcpy(Phone[i], Phone[i+1]);
			}
			q--; 
		}
		printf("�п�J�m�W�G");
		scanf("%s",&Name[q-1]);
		printf("�п�J�q�ܡG");
		scanf("%s",&Phone[q-1]);
		
		for(i=0;i<=q-1;i++){
			printf("%s %s\n",Name[i],Phone[i]);
		}	
			
		printf("============\n");
		printf("�O�_�~���J(Y/N)�H");
		x=getche();	
		printf("\n");		
	}				
}	
	
	

