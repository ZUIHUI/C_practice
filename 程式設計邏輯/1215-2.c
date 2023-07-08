#include<stdio.h>
#include<stdlib.h>
#include<String.h>

FILE *fp1;
main(){
	int i=0,a=0;
	char x[100],key[100],c[100];
	fp1=fopen("Search.dat","r");
	printf("請輸入關鍵字:");
	scanf("%s",&x);
	printf("================================\n");
	while ((fgets(key,100,fp1))!=NULL){	
		strcpy(c,key);	
		if(strstr(strupr(c),strupr(x))){
			
			printf("%s",key);
			a=1;	
			i++;
		}
		if(i>=3){
			break;
		}	
	}
	if(a!=1){
		printf("找不到資料!!");
	}
	fclose(fp1);
}

