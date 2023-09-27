#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
using namespace std;
const int INF = 0x3f3f3f3f;
const int MAXN = 500000;

int cnt;
int A[MAXN], L[MAXN/2+5], R[MAXN/2+5];

void merge(int left, int mid, int right){
	int n1 = mid - left, n2 = right - mid;
	for(int i = 0; i < n1; i++) L[i] = A[left+i];
	for(int i = 0; i < n2; i++) R[i] = A[mid+i];
	L[n1] = R[n2] = INF;
	int i = 0, j = 0;
	for(int k = left; k < right; k++){
		cnt++;
		if(L[i] < R[j])
			A[k] = L[i++];
		else
			A[k] = R[j++];
	}
}

void mergeSort(int left, int right){
	if(left + 1 < right){
		int mid = (left + right) / 2;
		mergeSort(left, mid);
		mergeSort(mid, right);
		merge(left, mid, right);
	}
}

int main(){
	int n;
	cin >> n;
	for(int i = 0; i < n; i++)
		scanf("%d", A + i);
	mergeSort(0, n);
	for(int i = 0; i < n; i++){
		if(i)
			printf(" ");
		printf("%d", A[i]);
	}
	printf("\n%d\n", cnt);
	return 0;
}