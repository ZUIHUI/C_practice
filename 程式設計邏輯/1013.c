#include<stdio.h>
#include<stdlib.h>

main(){
	printf("=======練習一=======\n");
	int s,sum=0;
	printf("請輸入一整數：");
	scanf("%d",&s);
	printf("===============\n");	
	while(s>=0){								
		sum=sum+s;
		printf("總和為%d\n",sum);
		printf("請輸入一整數：\n");
		scanf("%d",&s);	
	}
	printf("===============\n");
	printf("程式結束\n");
	
	printf("=======練習二=======\n");
	printf("請輸入一整數：");
	int w=1,i=1,n;
	scanf("%d",&n);	
	while(n>=0,i<=n){
		w*=i;
		i++;
		}
		printf("%d!=%d\n",n,w);				
}
	
