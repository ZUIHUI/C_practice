#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main(){
	printf("============1==========\n");
	int iSecret,o;
	srand (time(NULL)); 
	iSecret = rand()%10 + 1;
	printf("%d\n",iSecret);
	while(1){
		printf("請輸入一整數(1~100)：");
		scanf("%d",&o);
		printf("=======================\n");
		
		if(o==iSecret){
			printf("Bingo\n");
			break;
		}		
		else if(o<iSecret){
		    printf("太小了喔\n");
		}
		else{
			printf("太大了喔\n");
		}	
	}
	
	printf("============2==========\n");
	
	int j,t,ni;
	
	for(j=1;j<10;j++){
		for(t=1;t<10;t++){
			ni=j*t;				
			printf("%d*%d=%d\t",j,t,ni);
		}
		printf("\n");
	}
	printf("============3==========\n");
	
	for(j=0;j<6;j++){
		for(t=0;t<j;t++){
			printf("*");	
		}
		printf("\n");
	}
	printf("============3==========\n");
		
	for(j=0;j<6;j++){
		for(t=0;t<(5-j);t++){
			printf("*");	
		}
		printf("\n");
	}	
	printf("============3==========\n");
	
	for(j=0;j<6;j++){
		for(t=0;t<(6-j);t++){
			printf(" ");	
		}
		for(t=0;t<(j*2)-1;t++){
			printf("*");	
		}
		printf("\n");
	}
	printf("============4==========\n");
	
	int w=1,p=1,n;
	printf("請輸入一整數：");	
	scanf("%d",&n);	
	for(w;w<=n;w++){
		p*=w;	
		printf("%d!=%d\n",n,p);
	}	
	printf("============5==========\n");
	int a,i,yn=0;
	while(1){	
		printf("請輸入一整數：");
		scanf("%d",&a);
		printf("=======================\n");
		if(a==0){
			break;
		}
		for(i=2;i<=a/2;i++){
			if(a%i==0){
				printf("%d非質數\n",a);
				yn=1;
				break;	
			}					
		}
		if (yn==0){
			printf("%d是質數\n",a);
		} 
	}	
	printf("============6==========\n");
	
	int u,aa;
	printf("請輸入一整數：");
	scanf("%d",&u);
	printf("=======================\n");	
	printf("小於%d的質數有:",u);
	for(i=2;i<=u;i++){
		for(j=2;j<=i/2;j++){
			if(i%j==0){
				break;
			}	
		}
		if(j>i/2){
			printf("%d ",i);	
		}		
	}
}	
