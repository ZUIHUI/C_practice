#include <stdio.h>
#include <stdlib.h>

int A[]={9,8,7,6,5,4,3,2,1};
int j,i,r;

int main(){
	int n = sizeof(A)/sizeof(A[0]);
	printf("Total elements the array can hold is: %d\n",n);
	
	insort(A,n);

	for (i=1;i<=n;i++){
		printf("%d\n",A[i]);
	}
}

int insort(int A[], int n){
	
	for (i=1;i<=n;i++){
		insert(A,A[i],i-1);
	}
}

int insert(int A[],int r,int i){
	j=i;
	
	while(r < A[j]){
		A[j+1]=A[j];
		j=j-1;
	}
	A[j+1]=r;
}

