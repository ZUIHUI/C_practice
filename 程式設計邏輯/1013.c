#include<stdio.h>
#include<stdlib.h>

main(){
	printf("=======�m�ߤ@=======\n");
	int s,sum=0;
	printf("�п�J�@��ơG");
	scanf("%d",&s);
	printf("===============\n");	
	while(s>=0){								
		sum=sum+s;
		printf("�`�M��%d\n",sum);
		printf("�п�J�@��ơG\n");
		scanf("%d",&s);	
	}
	printf("===============\n");
	printf("�{������\n");
	
	printf("=======�m�ߤG=======\n");
	printf("�п�J�@��ơG");
	int w=1,i=1,n;
	scanf("%d",&n);	
	while(n>=0,i<=n){
		w*=i;
		i++;
		}
		printf("%d!=%d\n",n,w);				
}
	
