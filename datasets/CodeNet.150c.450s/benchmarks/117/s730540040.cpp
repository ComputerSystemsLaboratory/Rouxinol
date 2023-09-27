#include <cstdio>
int count=0;

void merge(int *A, int left, int mid, int right){
	int n1,n2,i,j,k;
	int *L, *R;
	n1 = mid - left;
	n2 = right - mid;
	L = new int[n1+1];
	R = new int[n2+1];

	for(i=0;i<n1;i++){
		L[i] = A[left+i];
	}
	for(i=0;i<n2;i++){
		R[i] = A[mid+i];
	}
	
	L[n1] = 1000000000;
	R[n2] = 1000000000;
	i=0;
	j=0;
	for (k=left; k<right;k++){
		count ++;
		if(L[i]<=R[j]){
			A[k] = L[i];
			i++;
		}
		else{
			A[k]=R[j];
			j++;
		}
	}
	delete L;
	delete R;
}


void mergeSort(int *A, int left, int right){
	int mid;
	if(left+1 < right){
		mid = (left+right)/2;
		mergeSort(A, left, mid);
		mergeSort(A, mid, right);
		merge(A, left, mid, right);
	}
}

int main(void){
	int i,n;
	int *A;

	std::scanf("%d", &n);
	A = new int[n];
	for(i=0;i<n;i++){
		std::scanf("%d", &A[i]);
	}
	mergeSort(A, 0, n);
	for(i=0;i<n-1;i++){
		std::printf("%d ", A[i]);
	}
	std::printf("%d\n", A[n-1]);
	std::printf("%d\n", count);
	
	delete A;
	return 0;
}