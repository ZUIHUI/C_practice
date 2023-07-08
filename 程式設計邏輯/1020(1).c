#include<stdio.h>
#include<stdlib.h>


main(){
	printf("============1==========\n");
	int i,in;
	printf("叫块俱计");
	scanf("%d",&in);
	printf("%d计Τ",in);
	for(i=1;i<=in;i++){
		if(in%i==0){
			printf("%d ",i);
		}
	}
	printf("\n"); 
	printf("============2==========\n");
	int inn,max,min,avg;
	
	while(1){
		printf("叫块计");
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
		printf("程:%d,程:%d,キА",max,min);
	
}
