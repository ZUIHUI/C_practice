#include<stdio.h>
#include<stdlib.h>


main(){
	printf("============1==========\n");
	int i,in;
	printf("�п�J�@��ơG");
	scanf("%d",&in);
	printf("%d���]�Ʀ�",in);
	for(i=1;i<=in;i++){
		if(in%i==0){
			printf("%d ",i);
		}
	}
	printf("\n"); 
	printf("============2==========\n");
	printf("��J0������J\n");
	
	int inn,max,min,to,cu;
	float sum;
	
	printf("�п�J�ƭȡG");
	scanf("%d",&inn);
	max=inn;
	min=inn;
	
	while(inn!=0){
		printf("�п�J�ƭȡG");
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
	printf("�̤j��:%d,�̤p��:%d,������:%.2f",max,min,sum);
	
	printf("============3==========\n");
	int innn,ni,count=1;
	printf("�п�J�@���ư�����G");
	scanf("%d",&innn);

	while(innn%count!=innn){
		ni=innn%(count*10);
		ni=ni/count;
		count=count*10;
		printf("%d",ni);
	}	
}
