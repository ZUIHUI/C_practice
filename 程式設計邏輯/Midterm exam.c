#include <stdio.h>
#include <stdlib.h>

char ch;

int a(){
	int in=0;
	while(1){
		ch=getche();
    	if(ch=='+'||ch=='-'||ch=='*'||ch=='/'||ch=='='){
    		return in;
    		break;
		}
		else{	
			in=in*10+(ch-'0');			
		}
	}
}
int main()
{    
	printf("請輸入一四則運算：");
    int sum=0;
	sum=a();
    while(1){	
		if(ch=='+'){
            sum+=a();
        }
        else if(ch=='-'){
            sum-=a();  
        }
        else if(ch=='*'){
            sum*=a();
        }
        else if(ch=='/'){
            sum/=a();
        }
		else if(ch=='='){
            break;
        }      	
	}
	printf("%d",sum);		
}  	       
