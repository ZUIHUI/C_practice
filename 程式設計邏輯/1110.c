#include<stdio.h>
#include<stdlib.h>

int main(){
	printf("============1B=========\n");
	//a1();
	printf("============2A=========\n");
	//a2();
	printf("============3A=========\n");
	a3();		
}
void a1(){
	int x[100];
	int i,in,z,f=0,q;
	for(i=0;i<=in;i++){
		printf("�п�J��%d�Ӿ�ơG",i+1);
		scanf("%d",&x[in]);
		
	}
	printf("================\n");
	printf("�п�J���P�_���ȡG");
	scanf("%d",&z);
	printf("================\n");
	printf("%d\n",in);
	for(i=0;i<=100;i++){
		if(in==z){
			printf("%d����J����%d�Ӿ��",z,q);
			f=1;
		}
		if(f==0){
			printf("%d���b����J���Ȥ�",z);
			break;
		}
	}
}
void a2(){
	int i,q;
	int sc[4][4];
	for(i=1;i<=3;i++){
		printf("�п�J��%d��P�Ǫ���妨�Z�G",i);
		scanf("%d",&sc[i][1]);
		printf("�п�J��%d��P�Ǫ��^�妨�Z�G",i);
		scanf("%d",&sc[i][2]);
		printf("�п�J��%d��P�Ǫ��ƾǦ��Z�G",i);
		scanf("%d",&sc[i][3]);
	}	
	printf("================\n");
	printf("�п�J���P�_���P�ǡG");
	scanf("%d",&q);
	printf("================\n");
	printf("��%d��P�Ǫ����Z���G���%d���A�^��%d���A�ƾ�%d��\n",q,sc[q][1],sc[q][2],sc[q][3]);		
}
void a3(){
	int i,q,sum=0,j;
	int sc[4][4],temp;
	float ave=0;
	for(i=1;i<=3;i++){
			printf("�п�J��%d��P�Ǫ���妨�Z�G",i);
			scanf("%d",&sc[i][1]);
			printf("�п�J��%d��P�Ǫ��^�妨�Z�G",i);
			scanf("%d",&sc[i][2]);
			printf("�п�J��%d��P�Ǫ��ƾǦ��Z�G",i);
			scanf("%d",&sc[i][3]);		
	}
	printf("================\n");
	for(i=1;i<=3;i++){
		sum=sc[i][1]+sc[i][2]+sc[i][3];
		ave=sum/3;
		printf("%d.",i);
		/*for(j=i;j>=0;j--){
			if(sc[j][1]>sc[j+1][1]){
				temp=sc[j][1];
				sc[j][1]=sc[j+1][1];
				sc[j+1][1]=temp;						
			}			
		}*/
		printf("��%d��P�Ǫ����Z���G���%d���A�^��%d���A�ƾ�%d��,�`��%d���A����%.2f��\n",i,sc[i][1],sc[i][2],sc[i][3],sum,ave);			
	}				
}		
