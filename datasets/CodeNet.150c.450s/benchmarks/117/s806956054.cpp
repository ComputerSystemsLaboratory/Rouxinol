#include<iostream>
#include<stdio.h>
#define MAX 500000
#define INFTY 2000000000

int L[MAX / 2 + 2], R[MAX / 2 + 2];
int cnt;

void merge(int A[], int left, int mid, int right){
	int n1 = mid - left;
	int n2 = right - mid;
	int i;
	int L[n1], R[n2];
	for (i = 0; i < n1; i++){
		L[i] = A[left + i];
	}
	for (i = 0; i < n2; i++){
		R[i] = A[mid + i];
	}
	L[n1] = INFTY;
	R[n2] = INFTY;
	i = 0;
	int j = 0;
	for (int k = left; k < right; k++){
		cnt++;
		if (L[i] <= R[j]){
			A[k] = L[i];
			i = i + 1;
		}
		else{
			A[k] = R[j];
			j = j + 1;
		}
	}
}

void mergeSort(int A[],int n, int left, int right){
	int mid;
	if (left + 1 < right){
		mid = (left + right) / 2;
		mergeSort(A, n, left, mid);
		mergeSort(A, n, mid, right);
		merge(A, left, mid, right);
	}
}

int main(){
	int A[MAX],n,i;
	cnt = 0;
	scanf("%d", &n);
	for (i = 0; i < n; i++){
		scanf("%d", &A[i]);
	}
	mergeSort(A, n, 0, n);
	for (int i = 0; i < n; i++){
		if (i)
			printf(" ");
		printf("%d", A[i]);
	}
	printf("\n");
	printf("%d\n", cnt);
	return 0;
}