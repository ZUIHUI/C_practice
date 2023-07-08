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
		printf("請輸入第%d個整數：",i+1);
		scanf("%d",&x[in]);
		
	}
	printf("================\n");
	printf("請輸入欲判斷的值：");
	scanf("%d",&z);
	printf("================\n");
	printf("%d\n",in);
	for(i=0;i<=100;i++){
		if(in==z){
			printf("%d為輸入的第%d個整數",z,q);
			f=1;
		}
		if(f==0){
			printf("%d不在剛剛輸入的值中",z);
			break;
		}
	}
}
void a2(){
	int i,q;
	int sc[4][4];
	for(i=1;i<=3;i++){
		printf("請輸入第%d位同學的國文成績：",i);
		scanf("%d",&sc[i][1]);
		printf("請輸入第%d位同學的英文成績：",i);
		scanf("%d",&sc[i][2]);
		printf("請輸入第%d位同學的數學成績：",i);
		scanf("%d",&sc[i][3]);
	}	
	printf("================\n");
	printf("請輸入欲判斷的同學：");
	scanf("%d",&q);
	printf("================\n");
	printf("第%d位同學的成績為：國文%d分，英文%d分，數學%d分\n",q,sc[q][1],sc[q][2],sc[q][3]);		
}
void a3(){
	int i,q,sum=0,j;
	int sc[4][4],temp;
	float ave=0;
	for(i=1;i<=3;i++){
			printf("請輸入第%d位同學的國文成績：",i);
			scanf("%d",&sc[i][1]);
			printf("請輸入第%d位同學的英文成績：",i);
			scanf("%d",&sc[i][2]);
			printf("請輸入第%d位同學的數學成績：",i);
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
		printf("第%d位同學的成績為：國文%d分，英文%d分，數學%d分,總分%d分，平均%.2f分\n",i,sc[i][1],sc[i][2],sc[i][3],sum,ave);			
	}				
}		
