#include <iostream>
#include <stdio.h>
#define MAX 500000
#define INFTY 1000000001
using namespace std;

int L[MAX/2 + 2],R[MAX/2 + 2];
int res;

void merge(int A[],int left,int mid,int right){
	int n1 = mid - left;
	int n2 = right - mid;
	for(int i = 0;i < n1;i++){
		L[i] = A[left + i];
	}
	for(int i = 0;i < n2;i++){
		R[i] = A[mid + i];
	}
	L[n1] = INFTY;
	R[n2] = INFTY;
	int i = 0;
	int j = 0;
	for(int k = left;k < right;k++){
		if(L[i] <= R[j]){
			A[k] = L[i];
			i = i + 1;
		}
		else{
			A[k] = R[j];
			j = j + 1;
		}
		res++;
	}
}

void mergeSort(int A[],int left,int right){
	int mid;
	if(left+1 < right){
		mid = (left + right)/2;
		mergeSort(A, left, mid);
		mergeSort(A, mid, right);
		merge(A, left, mid, right);
	}
}

int main(){
	int n,a[MAX + 2];
	res = 0;
	cin >> n;
	for(int i = 0;i < n;i++){
		scanf("%d",&a[i]);
	}

	mergeSort(a,0,n);

	for(int i = 0;i < n;i++){
		if(i != n-1){
			printf("%d ",a[i]);
		}
		else cout << a[i] <<endl;
	}
	cout << res <<endl;
	return 0;
}