#include<stdio.h>
#include<stdlib.h>
#include<time.h>

FILE *fp1,*fp2;

main(){
	printf("============1==========\n");
	int iSecret,o,count,sc;
	char ff[10][256],name[10][256];
	
	srand (time(NULL)); 
	iSecret = rand()%10 + 1;
	printf("Ans:%d\n",iSecret);
	
	fp1=fopen("aaa.txt","r");
	fscanf(fp1,"%s %d",&name[0],&sc);
	close(fp1);
	
	while(iSecret!=o){
		printf("�п�J�@���(1~100)�G");
		scanf("%d",&o);
		count+=1;
		printf("=======================\n");
		
		if(o==iSecret){			
			printf("Bingo(�z�q�F%d��)\n",count);
				
			if(count<sc){
				fp2=fopen("aaa.txt","w");
				printf("�z���̰����A�п�J�z���m�W:");
				scanf("%s",&ff[0]);		
				fprintf(fp2,"%s %d",ff[0],count);	
				fclose(fp2);
				break;
			}
			else{
				printf("�̰���: %s %d��",name[0],sc);	
				break;
			}		
		}			
		else if(o<iSecret){
		    printf("�Ӥp�F��\n");
		}
		else{
			printf("�Ӥj�F��\n");
		}		
	}
}	
