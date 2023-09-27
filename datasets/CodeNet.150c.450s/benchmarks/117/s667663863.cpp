#include<stdio.h>
const int INFTY = 2000000000;
int cnt=0;

void show(int *S, int &n){
	for(int i=0; i<n; ++i){
		if(i>0)
			printf(" ");
		printf("%d", S[i]);
	}	
}

void merge(int *S, int left, int mid, int right){
	int n1 = mid - left;
	int n2 = right - mid;

	int L[n1+1];
	int R[n2+1];

	for(int i=0; i<n1; ++i){
		L[i] = S[left + i];
	}
	for(int i=0; i<n2; ++i){
		R[i] = S[mid + i];
	}
	L[n1] = INFTY;
	R[n2] = INFTY;
	int i = 0;
	int j = 0;

	for(int k=left; k<right; ++k){
		cnt += 1;
		if(L[i] <= R[j]){
			S[k] = L[i];
			i += 1; 
		}else{
			S[k] = R[j];
			j += 1;
		}
	}
}

void mergeSort(int *S, int left, int right){
	if(left + 1 < right){
		int mid = (left + right) / 2;
		mergeSort(S, left, mid);
		mergeSort(S, mid, right);
		merge(S, left, mid, right);
	}
}

int main(){
	int n;
	scanf("%d", &n);

	int S[n];
	for(int i=0; i<n; ++i){
		scanf("%d", &S[i]);
	}

	mergeSort(S, 0, n);
	show(S, n);
	printf("\n%d\n", cnt);

	return 0;
}
