#include<stdio.h>
#include<stdlib.h>
#include <time.h>


int main(){
	printf("==========3顆骰子=========\n");	
	a1();
	printf("==========4顆骰子=========\n");
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
		
		printf("骰子點數為：%d %d %d\n",frist,second,third);
		printf("======================\n");
		if(frist==second && frist==third){
			printf("結果為：豹\子!(%d-%d-%d)\n",frist,second,third);
			printf("======================\n");
		}		
		else if( (frist==4 && second+third==11)|| (frist==5 && second+third==10)||(frist==6 && second+third==9)){
			printf("結果為：順子!(4-5-6)\n",frist,second,third);
			printf("======================\n");
		}
		else if(frist==second){
			printf("結果為：%d點\n",third);
			printf("======================\n");
		}
		else if(frist==third){
			printf("結果為：%d點\n",second);
			printf("======================\n");
		}
		else if(second==third){
			printf("結果為：%d點\n",frist);
			printf("======================\n");
		}
		else if((frist==1 && second+third==5) || (frist==2 && second+third==4)||(frist==3 && second+third==3)){
			printf("結果為：順子!(1-2-3)\n");
			printf("======================\n");
		}
		else{
			printf("不算!\n");
			printf("======================\n");
		}
		printf("重擲(R/r) 結束(Q/q):\n");
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
		
		printf("骰子點數為：%d %d %d %d\n",frist,second,third,four);
		printf("======================\n");
		
		if(frist==second && frist==third && frist==four){
			printf("結果為：一色!(%d-%d-%d-%d)\n",frist,second,third,four);
			printf("======================\n");
		}
		else if((frist==second && third==four) ||(frist==third && second==four)||(frist==four && second==third)){
			printf("洗拔辣\n");
			printf("======================\n");
		}
		else if(frist==second&&second==third || second==third&&third==four || frist==second&&second==four || frist==third&&third==four){
			printf("不算!\n");
			printf("======================\n");
		}	
		else if(frist==second && third+four==11 || second==third && frist+four==11 || frist==four && second+third==11 || second==four && frist+third==11){
			printf("結果為：11點\n");
			printf("======================\n");
		}
		else if((frist==second && third+four==3)||(second==third&&frist+four==3)||(frist==four&&second+third==3)||(second==four&&frist+third==3)){
			printf("結果為：BG(3點)\n");
			printf("======================\n");
		}
		else if(frist==second){
			printf("結果為：%d點\n",third+four);
			printf("======================\n");
		}
		else if(frist==third){
			printf("結果為：%d點\n",second+four);
			printf("======================\n");
		}
		else if(frist==four){
			printf("結果為：%d點\n",second+third);
			printf("======================\n");
		}
		else if(second==third){
			printf("結果為：%d點\n",frist+four);
			printf("======================\n");
		}
		else if(second==four){
			printf("結果為：%d點\n",frist+third);
			printf("======================\n");
		}
		else if(third==four){
			printf("結果為：%d點\n",frist+second);
			printf("======================\n");
		}
		else{
			printf("不算!\n");
			printf("======================\n");
		}
		printf("重擲(R/r) 結束(Q/q):\n");
		x=getche();
		printf("\n");					
	}
}

