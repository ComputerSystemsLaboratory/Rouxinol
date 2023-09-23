#include <cstdio>
#include <cstdlib>
#include <algorithm>

int parent(int i){
	return i/2;
}

int left(int i){
	return 2*i;
}

int right(int i){
	return 2*i+1;
}

void maxHeapify(int *A, int i, int n){
	int l_idx, r_idx, temp;
	l_idx = left(i+1)-1;
	r_idx = right(i+1)-1;
	temp = i;

	if(r_idx < n){\
		if(A[r_idx] > A[i]){
			temp = r_idx;
		}
	}
	if (l_idx < n){
		if (A[l_idx] > A[temp]){
			temp = l_idx;
		}
	}
	if (temp != i){
		std::swap(A[i], A[temp]);
		maxHeapify(A, temp, n);
	}
}

int main(void){
	int i,n;
	int *A;
	scanf("%d", &n);
	A = new int[n];
	for(i=0;i<n;i++){
		scanf("%d", &A[i]);
	}

	for(i=(n-1)/2;i>=0;i--){
		maxHeapify(A, i, n);
	}

	for(i=0;i<n;i++){
		printf(" %d", A[i]);
	}
	printf("\n");
	delete[] A;
	return 0;
}