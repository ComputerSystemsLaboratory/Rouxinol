#include <iostream>
#include <string>
#include <algorithm>
#include <math.h>
#define SENTINEL 1000000000;
using namespace std;

struct CardData {
	string suit;
	int    value;
};
CardData Q[100001],M[100001],L[50001],R[50001];

int partition(CardData A[],int n,int min,int max) {
	int r = A[max].value;
	int i = min - 1;

	for (int j = min; j <max; j++) {
		if (A[j].value <= r) {
			swap(A[j], A[++i]);
		}
	}

	swap(A[max], A[i + 1]);

	return i+1;
}

void quickSort(CardData A[],int n, int min, int max) {
	int q;
	if (min < max) {
		int q = partition(A, n, min, max);
				quickSort(A, n, min, q - 1);
				quickSort(A, n, q + 1, max);
	}
}

void merge(CardData A[], int n,int left ,int mid ,int right) {
	int n1 = mid - left;
	int n2 = right - mid;
	for (int t = 0; t < n1; t++)L[t] = A[left+t];
	for (int t = 0; t < n2; t++)R[t] = A[mid +t];
	L[n1].value = R[n2].value = SENTINEL;

	int l = 0, r = 0;
	for (int t = left; t < right; t++) {
		if (L[l].value > R[r].value) {
			A[t] = R[r];
			r++;
		}
		else {
			A[t] = L[l];
			l++;
		}
	}

}

void mergeSort(CardData A[], int n,int left, int right) {
	if (left + 1 < right) {
		int mid = (left + right) / 2;
		mergeSort(A, n, left, mid);
		mergeSort(A, n, mid, right);
		merge    (A, n, left, mid, right);
	}
}

void print(CardData A[],int n){
	for (int t = 0; t < n; t++) {
		cout << A[t].suit << " " << A[t].value << "\n";
	}
}

int main() {
	int n, cont = 0;
	cin >> n;
	for (int t = 0; t < n; t++) { 
		cin >> Q[t].suit >> Q[t].value; 
		M[t].suit  = Q[t].suit;
		M[t].value = Q[t].value;
	}

	quickSort(Q, n, 0, n - 1);
	mergeSort(M, n, 0, n);

	for (int t = 0; t < n; t++) {
		if (Q[t].suit != M[t].suit)cont++;
	}
	if (cont > 0) {
		cout << "Not stable" << "\n";
	}
	else if(cont==0) {
		cout << "Stable" << "\n";
	}

	print(Q, n);

	return 0;
}
