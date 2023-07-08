#include<stdio.h>
#include<stdlib.h>

int main(){
	printf("============1B=========\n");
	a1();
	printf("============2A=========\n");
	a2();
	printf("============2B=========\n");
	a3();		
}
void a1(){
	int x[100];
	int i,z,f=0,j;
	for(i=0;i<100;i++){
		printf("請輸入第%d個整數：",i+1);
		scanf("%d",&x[i]);	
		if(x[i]==-1){
			break;
		}
	}
	printf("================\n");
	printf("請輸入欲判斷的值：");
	scanf("%d",&z);
	printf("================\n");
	for(j=0;j<i;j++){
		if(x[j]==z){
			printf("%d為輸入的第%d個整數\n",z,j+1);
			f=1;
		}		
	}
	if(f==0){
			printf("%d不在剛剛輸入的值中\n",z);
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
	int i,q,j,y;
	int sc[4][5],temp[4];
	float avg=0;
	for(i=1;i<=3;i++){
			printf("請輸入第%d位同學的國文成績：",i);
			scanf("%d",&sc[i][1]);
			printf("請輸入第%d位同學的英文成績：",i);
			scanf("%d",&sc[i][2]);
			printf("請輸入第%d位同學的數學成績：",i);
			scanf("%d",&sc[i][3]);	
			
			sc[i][0]=sc[i][1]+sc[i][2]+sc[i][3];
			sc[i][4]=i;				
	}	
	printf("================\n");
	
	for(i=1;i<=3;i++){	
		for(j=1;j<=3;j++){
			if(sc[i][0]>sc[j][0]){
				for(y=0;y<=4;y++){
					temp[i]=sc[i][y];
					sc[i][y]=sc[j][y];
					sc[j][y]=temp[i];
				}							
			}			
		}				
	}
	for(y=1;y<=3;y++){
		avg=sc[y][0]/3.0;
		printf("%d.",y);
		printf("第%d位同學的成績為：國文%d分，英文%d分，數學%d分,總分%d分，平均%.2f分\n",sc[y][4],sc[y][1],sc[y][2],sc[y][3],sc[y][0],avg);				
	}		
}
	
