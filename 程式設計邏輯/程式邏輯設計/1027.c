#include<stdio.h>
#include<stdlib.h>


main(){
	printf("============1==========\n");
	int i,in;
	printf("請輸入一整數：");
	scanf("%d",&in);
	printf("%d的因數有",in);
	for(i=1;i<=in;i++){
		if(in%i==0){
			printf("%d ",i);
		}
	}
	printf("\n"); 
	printf("============2==========\n");
	printf("輸入0結束輸入\n");
	
	int inn,max,min,to,cu;
	float sum;
	
	printf("請輸入數值：");
	scanf("%d",&inn);
	max=inn;
	min=inn;
	
	while(inn!=0){
		printf("請輸入數值：");
		scanf("%d",&inn);
				
		if(inn==0){
			break;
		}
		
		to=to+inn;
		cu=cu+1;
		
		if(inn<min){
			min=inn;
		}
				  
		if(inn>max){
			max=inn;
		}		
	}					
	sum=to/cu;
	printf("最大值:%d,最小值:%d,平均值:%.2f",max,min,sum);
	
	printf("============3==========\n");
	int innn,ni,count=1;
	printf("請輸入一串整數做反轉：");
	scanf("%d",&innn);

	while(innn%count!=innn){
		ni=innn%(count*10);
		ni=ni/count;
		count=count*10;
		printf("%d",ni);
	}	
}
