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
	int inn,max,min,avg;
	
	while(1){
		printf("�п�J�ƭȡG");
		scanf("%d",&inn);
		if(inn==0){
			break;
		}
		for(i=0;i<=inn;i++){
			if(inn>max){
				max=inn;
			}
			else if(inn<max){
				min=inn;
			}	
		}
	}
		printf("�̤j��:%d,�̤p��:%d,������",max,min);
	
}
