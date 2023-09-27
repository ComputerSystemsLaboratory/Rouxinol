#include <cstdio>
#include <cstdlib>


int parent(int i){
	return i/2;
}

int left(int i){
	return i*2;
}

int right(int i){
	return i*2+1;
}

int main(void){
	int i,n;
	int *A;
	scanf("%d", &n);
	A = new int[n];
	for(i=0;i<n;i++){
		scanf("%d", &A[i]);
	}
	
	for(i=0;i<n;i++){
		printf("node %d: key = %d, ", i+1, A[i]);
		if(i!=0){
			printf("parent key = %d, ", A[parent(i+1)-1]);
		}
		if(left(i+1) <= n){
			printf("left key = %d, ", A[left(i+1)-1]);
		}
		if(right(i+1) <= n){
			printf("right key = %d, ", A[right(i+1)-1]);
		}
		printf("\n");
	}
	return 0;
}