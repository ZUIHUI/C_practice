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
		printf("請輸入一整數(1~100)：");
		scanf("%d",&o);
		count+=1;
		printf("=======================\n");
		
		if(o==iSecret){			
			printf("Bingo(您猜了%d次)\n",count);
				
			if(count<sc){
				fp2=fopen("aaa.txt","w");
				printf("您為最高分，請輸入您的姓名:");
				scanf("%s",&ff[0]);		
				fprintf(fp2,"%s %d",ff[0],count);	
				fclose(fp2);
				break;
			}
			else{
				printf("最高分: %s %d次",name[0],sc);	
				break;
			}		
		}			
		else if(o<iSecret){
		    printf("太小了喔\n");
		}
		else{
			printf("太大了喔\n");
		}		
	}
}	
