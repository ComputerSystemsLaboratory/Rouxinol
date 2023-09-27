/*
 * ALDS1_6_C.cpp
 *
 *  Created on: Apr 30, 2018
 *      Author: 13743
 */

#include<iostream>
#include<algorithm>

struct Card {
	char c;
	int x;
};

void merge(Card* A, int l, int mid, int r) {
	int n1 = mid - l;
	int n2 = r - mid;
	Card L[n1+1];
	Card R[n2+1];
	for(int i=0; i<n1; i++) {
		L[i] = A[l + i];
	}
	for(int i=0; i<n2; i++) {
		R[i] = A[mid + i];
	}
	L[n1].x = 1000000001;
	R[n2].x = 1000000001;
	int lj = 0;
	int rj = 0;
	for(int i=0; l+i<r; i++) {
		if(L[lj].x <= R[rj].x) {
			A[l+i] = L[lj];
			lj++;
		}
		else {
			A[l+i] = R[rj];
			rj++;
		}
	}
}

void mergeSort(Card* A, int l, int r) {
	if(l+1 < r) {
		int mid = (l + r) / 2;
		mergeSort(A, l, mid);
		mergeSort(A, mid, r);
		merge(A, l, mid, r);
	}
}

int partition(Card* A, int l, int r) {
	int x = A[r].x;
	int i = l - 1;
	for(int j=l; j<r; j++) {
		if(A[j].x <= x) {
			i++;
			std::swap(A[i], A[j]);
		}
	}
	std::swap(A[i+1], A[r]);
	return i+1;
}

void quickSort(Card* A, int p, int r) {
	if(p < r) {
		int q = partition(A, p, r);
		quickSort(A, p, q-1);
		quickSort(A, q+1, r);
	}
}

int main() {
	int n;
	Card A[100000];
	Card B[100000];

	std::cin >> n;
	for(int i=0; i<n; i++) {
		std::cin >> A[i].c >> A[i].x;
		B[i] = A[i];
	}

	mergeSort(A, 0, n);
	quickSort(B, 0, n-1);

	for(int i=0; i<n; i++) {
		if(A[i].c != B[i].c) {
			std::cout << "Not stable" << std::endl;
			break;
		}
		if(i == n-1) {
			std::cout << "Stable" << std::endl;
		}
	}
	for(int i=0; i<n; i++) {
		std::cout << B[i].c << " " << B[i].x << std::endl;
	}
}



