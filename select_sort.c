#include <stdio.h>
#include <stdlib.h>

int A[]={9,8,55,44,6,4,1,11,88,87,2,3};
int j,i;

int main(){
	int n = sizeof(A)/sizeof(A[0]);
	printf("the array lenght: %d\n",n);
	
	select(A,n);

	for(i=1;i<=n;i++){
		printf("%d\n",A[i]);
	}
}

int select(int A[], int n){
	int min;
	for(i=0;i<n;i++){
		min = i;
		for(j=i+1;j<=n;j++){
			if(A[j] < A[min]){
				min = j;
			}
		}
		if(i != min){
			int temp = A[i];
			A[i] = A[min];
			A[min] = temp;
		}
	}
}


