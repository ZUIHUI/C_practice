#include <stdio.h>
#include <stdlib.h>

int A[]={9,8,55,44,6,4,1,11,88,5};
int j,i,f,temp;

int main(){
	int n = sizeof(A)/sizeof(A[0]);
	printf("the array lenght: %d\n",n);
	
	bubble(A,n);

	for(i=1;i<=n;i++){
		printf("%d\n",A[i]);
	}
}

int bubble(int A[], int n){
	for(i=1;i<=n;i++){
		f=0;
		for(j=0;j<=(n-i);j++){
			if(A[j]>A[j+1]){
				temp = A[j];
				A[j] = A[j+1];
				A[j+1] = temp;
				f=1;
			}
		}
	}
	if(f==0){
		exit(0);
	}
}


