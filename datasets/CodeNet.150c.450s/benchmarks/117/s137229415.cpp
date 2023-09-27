/*
 * ALDS1_5_B.cpp
 *
 *  Created on: Apr 27, 2018
 *      Author: 13743
 */

#include<cstdio>

using namespace std;

int cnt = 0;

void merge(int* A, int l, int mid, int r) {
	int n1 = mid - l;
	int n2 = r - mid;
	int L[n1+1];
	int R[n2+1];
	for(int i=0; i<n1; i++) {
		L[i] = A[l + i];
	}
	for(int i=0; i<n2; i++) {
		R[i] = A[mid + i];
	}
	L[n1] = 1000000001;
	R[n2] = 1000000001;
	int lj = 0;
	int rj = 0;
	for(int i=0; l+i<r; i++) {
		cnt++;
		if(L[lj] <= R[rj]) {
			A[l+i] = L[lj];
			lj++;
		}
		else {
			A[l+i] = R[rj];
			rj++;
		}
	}
}

void mergeSort(int* A, int l, int r) {
	if(l+1 < r) {
		int mid = (l + r) / 2;
		mergeSort(A, l, mid);
		mergeSort(A, mid, r);
		merge(A, l, mid, r);
	}
}

int main() {
	int n;
	int S[500000];
	scanf("%d", &n);
	for(int i=0; i<n; i++) {
		scanf("%d", &S[i]);
	}

	mergeSort(S, 0, n);

	printf("%d", S[0]);
	for(int i=1; i<n; i++) {
		printf(" %d", S[i]);
	}
	printf("\n%d\n", cnt);
}

