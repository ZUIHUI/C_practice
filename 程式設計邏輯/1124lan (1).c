#include<stdio.h>
#include<stdlib.h>
#include <time.h>


int main(){
	printf("==========3����l=========\n");	
	a1();
	printf("==========4����l=========\n");
	a2();
}

void a1(){
	int frist,second,third,four;	
	char a;
	while(a!='q' && a!='Q'){
		
		srand (time(NULL)); 
		frist= rand()%6 + 1;
		second= rand()%6 + 1;
		third= rand()%6 + 1;
		
		printf("��l�I�Ƭ��G%d %d %d\n",frist,second,third);
		printf("======================\n");
		if(frist==second && frist==third){
			printf("���G���G�\\�l!(%d-%d-%d)\n",frist,second,third);
			printf("======================\n");
		}		
		else if( (frist==4 && second+third==11)|| (frist==5 && second+third==10)||(frist==6 && second+third==9)){
			printf("���G���G���l!(4-5-6)\n",frist,second,third);
			printf("======================\n");
		}
		else if(frist==second){
			printf("���G���G%d�I\n",third);
			printf("======================\n");
		}
		else if(frist==third){
			printf("���G���G%d�I\n",second);
			printf("======================\n");
		}
		else if(second==third){
			printf("���G���G%d�I\n",frist);
			printf("======================\n");
		}
		else if((frist==1 && second+third==5) || (frist==2 && second+third==4)||(frist==3 && second+third==3)){
			printf("���G���G���l!(1-2-3)\n");
			printf("======================\n");
		}
		else{
			printf("����!\n");
			printf("======================\n");
		}
		printf("���Y(R/r) ����(Q/q):\n");
		a=getche();
		printf("\n");					
	}
}

void a2(){
	
	int frist,second,third,four;	
	char x='R';
	
	while(x!='q' && x!='Q'){
		
		srand (time(NULL)); 
		frist= rand()%6 + 1;
		second= rand()%6 + 1;
		third= rand()%6 + 1;
		four= rand()%6 + 1;
		
		printf("��l�I�Ƭ��G%d %d %d %d\n",frist,second,third,four);
		printf("======================\n");
		
		if(frist==second && frist==third && frist==four){
			printf("���G���G�@��!(%d-%d-%d-%d)\n",frist,second,third,four);
			printf("======================\n");
		}
		else if((frist==second && third==four) ||(frist==third && second==four)||(frist==four && second==third)){
			printf("�~�޻�\n");
			printf("======================\n");
		}
		else if(frist==second&&second==third || second==third&&third==four || frist==second&&second==four || frist==third&&third==four){
			printf("����!\n");
			printf("======================\n");
		}	
		else if(frist==second && third+four==11 || second==third && frist+four==11 || frist==four && second+third==11 || second==four && frist+third==11){
			printf("���G���G11�I\n");
			printf("======================\n");
		}
		else if((frist==second && third+four==3)||(second==third&&frist+four==3)||(frist==four&&second+third==3)||(second==four&&frist+third==3)){
			printf("���G���GBG(3�I)\n");
			printf("======================\n");
		}
		else if(frist==second){
			printf("���G���G%d�I\n",third+four);
			printf("======================\n");
		}
		else if(frist==third){
			printf("���G���G%d�I\n",second+four);
			printf("======================\n");
		}
		else if(frist==four){
			printf("���G���G%d�I\n",second+third);
			printf("======================\n");
		}
		else if(second==third){
			printf("���G���G%d�I\n",frist+four);
			printf("======================\n");
		}
		else if(second==four){
			printf("���G���G%d�I\n",frist+third);
			printf("======================\n");
		}
		else if(third==four){
			printf("���G���G%d�I\n",frist+second);
			printf("======================\n");
		}
		else{
			printf("����!\n");
			printf("======================\n");
		}
		printf("���Y(R/r) ����(Q/q):\n");
		x=getche();
		printf("\n");					
	}
}

