#include<stdio.h>
#include<stdlib.h>

main(){
	printf("�m�ߤ@\n");
	int i,h,sum=0;
	printf("�����W�L�@�p�ɨC�p�ɦ��O40��\n�п�J�����ɶ��X�p��:");
	scanf("%d",&h);
	if(h<=1){
		printf("����%d�p�ɡA�`�O�άO%d��\n",h,sum);
	}
	else{
		for(i=2;i<=h;i++){
			sum=i*40;
		}
		printf("=====================\n");
		printf("����%d�p�ɡA�`�O�άO%d��\n",h,sum);
	}
	
	printf("=====================\n");
	printf("�m�ߤG\n");	
	int s=0,l=0,summ=0;
	printf("�C�i�J����������(��):\n"); 
	scanf("%d",&s);
	printf("�п�J�U�ȱ��ʶR���i��:\n");
	scanf("%d",&l); 
	if(l>=10){
		printf("=====================\n");
		printf("�ʶR10�i�H�W���E��\n");
		summ=(s*l)*0.9; 
	}
	printf("�`���O:%d\n",summ); 
	
	printf("=====================\n");
	printf("�m�ߤT\n");
	float g=0,m=0,summm=0;
	printf("�п�J�ҭn�p�⪺�ƭȡG\n");
	scanf("%f",&g);
	printf("�п�J1(�p�⥭���)��2(�p��ߤ��):\n");
	scanf("%f",&m);
	printf("=====================\n");
	if(m==1){
		summm=g*g;
		printf("����Ȭ��G%.1f\n",summm);
	}
	else if(m==2){
		summm=g*g*g;
		printf("�ߤ�Ȭ��G%.1f\n",summm);
    }
    else{
    	printf("��J���~ �п�J1(�p�⥭���)��2(�p��ߤ��)\n");   
	}
	
    printf("=====================\n");
	printf("�m�ߥ|\n");
	int y=0;
	printf("�п�J�@����ơG\n");
	scanf("%d",&y);
	printf("=====================\n");
	if(y % 2 == 0 && y % 3 == 0){	
		printf("���Ƭ�2��3������\n");
	}
	else{
		printf("���ƫD2��3������\n");
	} 
	printf("=====================\n");
	printf("�m�ߤ�\n");
	float k=0,q=0,u=0,a=0;
	printf("�п�J��Ϊ��W��:\n");
	scanf("%f",&k);
	printf("�п�J��Ϊ��U��:\n");
	scanf("%f",&q);
	printf("�п�J��Ϊ���:\n");
	scanf("%f",&u);
	a=(k+q)*u/2;
	printf("���n�O:%.1f",a);
}
	


	
	
	

