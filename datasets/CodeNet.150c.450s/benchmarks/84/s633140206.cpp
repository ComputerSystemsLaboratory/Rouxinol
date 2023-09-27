/*
 * ALDS1_5_D.cpp
 *
 *  Created on: Apr 30, 2018
 *      Author: 13743
 */

#include<cstdio>


long mergeCount(int* A, int l, int r) {
	if(l+1 == r) {
		return 0;
	}
	int mid = (l + r) / 2;
	long c1 = mergeCount(A, l, mid);
	long c2 = mergeCount(A, mid, r);
	int n1 = mid - l;
	int n2 = r - mid;
	int A1[n1+1];
	int A2[n2+1];
	A1[n1] = 1000000001;
	A2[n2] = 1000000001;
	for(int i=0; i<n1; i++) {
		A1[i] = A[l+i];
	}
	for(int i=0; i<n2; i++) {
		A2[i] = A[mid+i];
	}
	int i1=0, i2=0;
	long cc = 0;
	for(int i=0; i<r-l; i++){
		if(A2[i2] < A1[i1]) {
			cc += n1 - i1;
			A[l+i] = A2[i2];
			i2++;
		}
		else {
			A[l+i] = A1[i1];
			i1++;
		}
	}
	return c1 + c2 + cc;
}

int main() {
	int n;
	int A[200000];

	scanf("%d", &n);
	for(int i=0; i<n; i++) {
		scanf("%d", &A[i]);
	}

	long cnt = mergeCount(A, 0, n);

	printf("%ld\n", cnt);
}



