#include<stdio.h>
#include<stdlib.h>
#include<time.h>

FILE *fp1,*fp2,*fp3,*fp4,*fp5;
main(){
	srand (time(NULL));
	int i,num,num1,qq[100];
	char min,max,min1,max1,min2,user[100],pwd[100],qqq[100],file[20];
	
	fp1=fopen("user.txt","w");	
	
	for(i=0;i<100;i++){	
		min = rand()% 26 + 97;
		max = rand()% 26 + 65;
		min1 = rand()% 26 + 97;
		max1 = rand()% 26 + 65;
		min2 = rand()% 26 + 97;
		num = rand()%10;
		num1 = rand()%10;
		qq[i] = i+1;
		printf("HN%03d 2%c%c%d%c%c%d%c \n",qq[i],min,max,num,min1,max1,num1,min2);	
		fprintf(fp1,"HN%03d 2%c%c%d%c%c%d%c \n",qq[i],min,max,num,min1,max1,num1,min2);
	}
	fclose(fp1);	
	
	fp2=fopen("user.txt","r");
	for(i=0;i<100;i++){
		
	while(fscanf(fp2,"%s %s",&user,&pwd)!=EOF){
		sprintf(file,"\%s.txt",user);
		fp3=fopen(file,"w+");
		fp4=fopen("welcome.dat","r");
			while((fgets(qqq,100,fp4)!=NULL)){
			
				if(strstr(qqq,"<ID>")){
					fprintf(fp3,"\t\t±b¸¹: %s",user);
				}
				else if(strstr(qqq,"<PASSWORD>")){
					fprintf(fp3,"\n");	
					fprintf(fp3,"\t\t±K½X: %s",pwd);
				}
				else{
					fprintf(fp3,"%s",qqq);
				}
			}
		}
		fclose(fp2);
		fclose(fp3);
		fclose(fp4);	
	}
}
