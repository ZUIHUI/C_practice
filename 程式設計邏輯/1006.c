#include<stdio.h>
#include<stdlib.h>

main(){
		printf("==================\n");
		printf("練習1\n");
		printf("==================\n");
		int m;
		printf("客戶購物金額(元):\n");
		scanf("%d",&m);
		printf("==================\n");
		if(m<1000){
			m=m;
			printf("折扣為0%%\n");
		}
		else if(m>=1000 && m<5000){
			m=m*0.95;			
			printf("折扣為5%%\n");
		}
		else if(m>=5000 && m<30000){
			m=m*0.9;			
			printf("折扣為10%%\n");
		}			
		else if(m>=30000 && m<100000){
			m=m*0.85;			
			printf("折扣為15%%\n");
		}
		else if(m>=100000){
			m=m*0.8;			
			printf("折扣為20%%\n");		
		}
		printf("實付為:%d元\n",m);
		
		printf("==================\n");
		printf("練習2\n");
		printf("==================\n");
		float h,w,bmi;
		printf("請輸入體重(Kg):\n");
		scanf("%f",&w);
		printf("請輸入身高(Cm):\n");
		scanf("%f",&h);
		bmi=w / ((h/100)*(h/100));
		printf("==================\n");
		if(bmi<=18.5){
			printf("BMI=%f (體重過輕)\n",bmi);		
		}
		else if(bmi>=23){
			printf("BMI=%f (體重過重)\n",bmi);
		}
		else if(bmi>18.5 && bmi<23){
			printf("BMI=%f (正常體位)\n",bmi);
		}
		
		printf("==================\n");
		printf("練習3\n");
		printf("==================\n");
		char a;
		printf("請輸入分數群組:\n");
		scanf("%s",&a);	
		printf("==================\n");
		if(a=='A'|| a=='a'){
			printf("分數在90分以上\n");
		}
		else if(a=='B' || a=='b'){
			printf("分數在80~89分之間\n");
		}
		else if(a=='C' || a=='c'){
			printf("分數在70~79分之間\n");
		}							
		else if(a=='D' || a=='d'){
			printf("分數在60~69分之間\n");
		}							
		else if(a=='E' || a=='e'){
			printf("你被當掉了\n");
		}
		else{
		    printf("沒有此分數群組\n");
		}
		printf("==================\n");
		printf("練習4\n");
		printf("==================\n");
		float q,y,t;
		printf("請輸入信用額度:\n");
		scanf("%f",&q);
		printf("繳款是否正常(1:正常,0:不正常):\n");
		scanf("%f",&y);	
		if(y==1){
			printf("請輸入持卡年份:\n");
			scanf("%f",&t);
			if(t<=0.5){
				printf("預借現金金額為0元\n");	
			}
			else if(t>0.5 && t<1){
				printf("預借現金金額為%f元\n",q*0.05);
			}
			else if(t>=1){
				printf("預借現金金額為%f元\n",q*0.1);
			}
		}
		else if(y==0){
			printf("預借現金金額為0元\n");
		}
		
		printf("==================\n");
		printf("練習4 單一\n");
		printf("==================\n");
		printf("請輸入信用額度:\n");
		scanf("%f",&q);
		printf("繳款是否正常(1:正常,0:不正常):\n");
		scanf("%f",&y);	
		if(y==0){
			printf("預借現金金額為0元");
		}
		else{
			printf("請輸入持卡年份:\n");
			scanf("%f",&t);			
		} 
		if(t<=0.5){
			printf("預借現金金額為0元\n");	
		}
		else if(t>0.5 && t<1){
			printf("預借現金金額為%f元\n",q*0.05);
		}
		else if(t>=1){
			printf("預借現金金額為%f元\n",q*0.1);
		}
		
		printf("==================\n");
		printf("練習5\n");
		printf("==================\n");
		int u;
		printf("請輸入西元年份:\n");
		scanf("%d",&u);
		printf("==================\n");
		if(u%4==0 && u%400==0){
			printf("%d是閏年",u);
		}
		else if(u%100==0 && u%400==0){
			printf("%d是閏年",u);
		}
		else{
			printf("%d不是閏年",u);
		}	
	}
	
																		
	



	
	
	

