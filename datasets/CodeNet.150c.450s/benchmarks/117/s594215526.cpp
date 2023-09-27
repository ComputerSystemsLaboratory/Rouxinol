#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;
const long long INF = 2e9;
const int MaxSize = 500005;
int L[MaxSize/2+2], R[MaxSize/2+2];
int num[MaxSize];
int cnt;
void Merge(int A[], int left, int mid, int right) {
	int n1 = mid - left;
	int n2 = right - mid;
	for (int i = 0; i < n1; i++)L[i] = A[left+i];
	for (int i = 0; i < n2; i++)R[i] = A[mid + i];
	L[n1] = R[n2] = INF;
	int i = 0, j = 0;
	for (int k = left; k < right; k++) {
		cnt++;
		if (L[i] <= R[j])A[k]=L[i++];
		else A[k]=R[j++];
	}
}
void Merge_sort(int A[], int left, int right) {
	if (left + 1 < right) {
		int mid = (right + left) / 2;
		Merge_sort(A, left, mid);
		Merge_sort(A, mid, right);
		Merge(A, left, mid, right);
	}
}
int main() {
	int n = 0;
	scanf("%d", &n);
	cnt = 0;
	for (int i = 0; i < n; i++) { 
		scanf("%d", & num[i]);
	}
	Merge_sort(num, 0, n);
	for (int i = 0; i < n ; i++) {
		if (i)printf(" ");
		 printf("%d",num[i]);
	}
	printf("\n%d\n", cnt);
	return 0;
}