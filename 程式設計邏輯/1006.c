#include<stdio.h>
#include<stdlib.h>

main(){
		printf("==================\n");
		printf("�m��1\n");
		printf("==================\n");
		int m;
		printf("�Ȥ��ʪ����B(��):\n");
		scanf("%d",&m);
		printf("==================\n");
		if(m<1000){
			m=m;
			printf("�馩��0%%\n");
		}
		else if(m>=1000 && m<5000){
			m=m*0.95;			
			printf("�馩��5%%\n");
		}
		else if(m>=5000 && m<30000){
			m=m*0.9;			
			printf("�馩��10%%\n");
		}			
		else if(m>=30000 && m<100000){
			m=m*0.85;			
			printf("�馩��15%%\n");
		}
		else if(m>=100000){
			m=m*0.8;			
			printf("�馩��20%%\n");		
		}
		printf("��I��:%d��\n",m);
		
		printf("==================\n");
		printf("�m��2\n");
		printf("==================\n");
		float h,w,bmi;
		printf("�п�J�魫(Kg):\n");
		scanf("%f",&w);
		printf("�п�J����(Cm):\n");
		scanf("%f",&h);
		bmi=w / ((h/100)*(h/100));
		printf("==================\n");
		if(bmi<=18.5){
			printf("BMI=%f (�魫�L��)\n",bmi);		
		}
		else if(bmi>=23){
			printf("BMI=%f (�魫�L��)\n",bmi);
		}
		else if(bmi>18.5 && bmi<23){
			printf("BMI=%f (���`���)\n",bmi);
		}
		
		printf("==================\n");
		printf("�m��3\n");
		printf("==================\n");
		char a;
		printf("�п�J���Ƹs��:\n");
		scanf("%s",&a);	
		printf("==================\n");
		if(a=='A'|| a=='a'){
			printf("���Ʀb90���H�W\n");
		}
		else if(a=='B' || a=='b'){
			printf("���Ʀb80~89������\n");
		}
		else if(a=='C' || a=='c'){
			printf("���Ʀb70~79������\n");
		}							
		else if(a=='D' || a=='d'){
			printf("���Ʀb60~69������\n");
		}							
		else if(a=='E' || a=='e'){
			printf("�A�Q���F\n");
		}
		else{
		    printf("�S�������Ƹs��\n");
		}
		printf("==================\n");
		printf("�m��4\n");
		printf("==================\n");
		float q,y,t;
		printf("�п�J�H���B��:\n");
		scanf("%f",&q);
		printf("ú�ڬO�_���`(1:���`,0:�����`):\n");
		scanf("%f",&y);	
		if(y==1){
			printf("�п�J���d�~��:\n");
			scanf("%f",&t);
			if(t<=0.5){
				printf("�w�ɲ{�����B��0��\n");	
			}
			else if(t>0.5 && t<1){
				printf("�w�ɲ{�����B��%f��\n",q*0.05);
			}
			else if(t>=1){
				printf("�w�ɲ{�����B��%f��\n",q*0.1);
			}
		}
		else if(y==0){
			printf("�w�ɲ{�����B��0��\n");
		}
		
		printf("==================\n");
		printf("�m��4 ��@\n");
		printf("==================\n");
		printf("�п�J�H���B��:\n");
		scanf("%f",&q);
		printf("ú�ڬO�_���`(1:���`,0:�����`):\n");
		scanf("%f",&y);	
		if(y==0){
			printf("�w�ɲ{�����B��0��");
		}
		else{
			printf("�п�J���d�~��:\n");
			scanf("%f",&t);			
		} 
		if(t<=0.5){
			printf("�w�ɲ{�����B��0��\n");	
		}
		else if(t>0.5 && t<1){
			printf("�w�ɲ{�����B��%f��\n",q*0.05);
		}
		else if(t>=1){
			printf("�w�ɲ{�����B��%f��\n",q*0.1);
		}
		
		printf("==================\n");
		printf("�m��5\n");
		printf("==================\n");
		int u;
		printf("�п�J�褸�~��:\n");
		scanf("%d",&u);
		printf("==================\n");
		if(u%4==0 && u%400==0){
			printf("%d�O�|�~",u);
		}
		else if(u%100==0 && u%400==0){
			printf("%d�O�|�~",u);
		}
		else{
			printf("%d���O�|�~",u);
		}	
	}
	
																		
	



	
	
	

