#include <cstdio>

using namespace std;

#define MAX 500000
#define INF 2000000000; 

int count = 0;

void merge(int A[], int left, int mid, int right) {
	int n1, n2;
	int L[MAX/2 + 2], R[MAX / 2 + 2];
	n1 = mid - left;
	n2 = right - mid;
	
	for (int i = 0; i < n1; i++){
		L[i] = A[left + i];
	}

	for (int j = 0; j < n2; j++) {
		R[j] = A[mid + j];
	}
	L[n1] = R[n2] = INF; //番兵
	int i = 0;
	int j = 0;
	for (int k = left; k < right; k++) {
		count++;
		if(L[i] <= R[j]) {
			A[k] = L[i];
			i++;
		}else {
			A[k] = R[j];
			j++;
		}
	}
}


void mergeSort(int A[], int left, int right) {	
	if(left + 1 < right) {
		int mid = (left + right) / 2;
		mergeSort(A, left, mid);
		mergeSort(A, mid, right);
		merge(A, left, mid, right);
	}
}


int main(){
	int n;
	int A[MAX];
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &A[i]);
	}
	mergeSort(A, 0, n);

	for (int i = 0; i < n; i++) {
		i != (n-1) ? printf("%d ", A[i]) : printf("%d\n", A[i]);
	}

	printf("%d\n", count);
}


