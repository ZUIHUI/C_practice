#include<stdio.h>
#include<stdlib.h>

main(){
	printf("練習一\n");
	int i,h,sum=0;
	printf("停車超過一小時每小時收費40元\n請輸入停車時間幾小時:");
	scanf("%d",&h);
	if(h<=1){
		printf("停車%d小時，總費用是%d元\n",h,sum);
	}
	else{
		for(i=2;i<=h;i++){
			sum=i*40;
		}
		printf("=====================\n");
		printf("停車%d小時，總費用是%d元\n",h,sum);
	}
	
	printf("=====================\n");
	printf("練習二\n");	
	int s=0,l=0,summ=0;
	printf("每張入場卷的價格(元):\n"); 
	scanf("%d",&s);
	printf("請輸入顧客欲購買的張數:\n");
	scanf("%d",&l); 
	if(l>=10){
		printf("=====================\n");
		printf("購買10張以上打九折\n");
		summ=(s*l)*0.9; 
	}
	printf("總價是:%d\n",summ); 
	
	printf("=====================\n");
	printf("練習三\n");
	float g=0,m=0,summm=0;
	printf("請輸入所要計算的數值：\n");
	scanf("%f",&g);
	printf("請輸入1(計算平方值)或2(計算立方值):\n");
	scanf("%f",&m);
	printf("=====================\n");
	if(m==1){
		summm=g*g;
		printf("平方值為：%.1f\n",summm);
	}
	else if(m==2){
		summm=g*g*g;
		printf("立方值為：%.1f\n",summm);
    }
    else{
    	printf("輸入錯誤 請輸入1(計算平方值)或2(計算立方值)\n");   
	}
	
    printf("=====================\n");
	printf("練習四\n");
	int y=0;
	printf("請輸入一正整數：\n");
	scanf("%d",&y);
	printf("=====================\n");
	if(y % 2 == 0 && y % 3 == 0){	
		printf("此數為2或3的倍數\n");
	}
	else{
		printf("此數非2或3的倍數\n");
	} 
	printf("=====================\n");
	printf("練習五\n");
	float k=0,q=0,u=0,a=0;
	printf("請輸入梯形的上底:\n");
	scanf("%f",&k);
	printf("請輸入梯形的下底:\n");
	scanf("%f",&q);
	printf("請輸入梯形的高:\n");
	scanf("%f",&u);
	a=(k+q)*u/2;
	printf("面積是:%.1f",a);
}
	


	
	
	

