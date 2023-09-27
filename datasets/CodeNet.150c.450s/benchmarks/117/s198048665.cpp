#include <iostream>
#include <cstdio>
#define MAXN 500000
using namespace std;

int cnt, INF = 2000000000;
int A[500001];
int L[MAXN/2 + 2], R[MAXN/2 + 2];
void merge(int A[], int left, int mid, int right){
	int n1 = mid - left;
	int n2 = right - mid;
	
	for (int i = 0; i < n1; i++) {
		L[i] = A[left + i];
	}
	for (int i = 0; i < n2; i++) {
		R[i] = A[mid + i];
	}
	L[n1] = INF;
	R[n2] = INF;
	int i = 0, j = 0;
	for (int k = left; k < right; k++) {
		cnt++;
		if (L[i] <= R[j]) {
			A[k] = L[i++];
		}else {
			A[k] = R[j++];
		}
	}
}

void mergeSort(int A[], int left, int right){
	if (left+1 < right) {
		int mid = (left + right) / 2;
		mergeSort(A, left, mid);
		mergeSort(A, mid, right);
		merge(A, left, mid, right);
	}
}

int main(int argc, char *argv[]) {
	int m;
	cin >> m;
	for (int i = 0; i < m; i++) {
		scanf("%d", &A[i]);
	}
	mergeSort(A, 0, m);
	for (int i = 0; i < m; i++) {
		if (i) {
			printf(" ");
		}
		printf("%d", A[i]);
	}
	printf("\n");
	printf("%d\n", cnt);
	return 0;
}
