#include<stdio.h>
#include<stdlib.h>

int main(){
	printf("======01======\n");
	a1();
}
void a1(){
	char Phone[5][64],Name[5][64],x=" ";
	int a,q=1,h,m=1;
	while(x!='N'){		
		printf("�п�J�m�W�G");
		scanf("%s",&Name[q]);
		printf("�п�J�q�ܡG");
		scanf("%s",&Phone[q]);
		if(q<=5){
			for(a=1;a<=q;a++){
				printf("%s %s\n",Name[a],Phone[a]);
			}
			q++;		
		}
		else{	
			for(h=1;h<=5&&h<=q;h++){
				strcpy(Name[h], Name[h+1]);
				strcpy(Phone[h], Phone[h+1]);
			}	
			for(a=1;a<=5&&a<=q;a++){
				printf("%s %s\n",Name[a],Phone[a]);	
			}
		}				
		printf("============\n");
		printf("�O�_�~���J(Y/N)�H");
		x=getche();	
		printf("\n");		
	}				
}		
	

