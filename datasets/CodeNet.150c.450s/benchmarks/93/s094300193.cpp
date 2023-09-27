#pragma warning (disable :4996)
#include <iostream>
#include <cstdio>
#include <bits/stdc++.h>
#include<math.h>
using namespace std;
typedef long long ll;
const int N = 1e7 + 10;

struct poke {
	char ch;
	int num;
}A[100010],B[100010], L[50005], R[50005];
int partition(poke A[], int p, int r) {
	poke x = A[r];
	int i = p - 1;
	for (int j = p; j < r; j++) {
		if (A[j].num <= x.num) swap(A[++i], A[j]);
	}
	swap(A[++i], A[r]);
	return i;
}
void quicksort(poke A[], int p, int r) {
	int pos;
	if (p < r) {
		pos = partition(A, p, r);
		quicksort(A, p, pos-1);
		quicksort(A, pos + 1, r);
	}
}

void merge(poke A[], int le, int mid,int r) {
	int n1 = mid - le, n2 = r - mid;
	L[n1].num = R[n2].num = 2*1e9;
	for (int i = 0; i < n1; i++) L[i] = A[le+i];
	for (int i = 0; i < n2; i++) R[i] = A[mid+i];
	int i = 0, j = 0;
	for (int k = le; k < r; k++) {
		if (L[i].num <= R[j].num) A[k] = L[i++];
		else A[k] = R[j++];
	}
}
void mergesort(poke A[], int le, int r) {
	if (le+1 < r) {
		int mid = (r + le) / 2;
		mergesort(A, le, mid);
		mergesort(A, mid, r);
		merge(A, le, mid, r);
	}
}
int main() {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		cin >> A[i].ch >> A[i].num;
		B[i] = A[i];
	}
	int flag = 0;
	quicksort(A, 0, n - 1);
	mergesort(B, 0, n);
	for (int i = 0; i < n; i++) {
		if (A[i].ch != B[i].ch) {
			flag = 1;
			break;
		}
	}
	if (flag) cout << "Not stable" << endl;
	else cout << "Stable" << endl;
	for (int i = 0; i < n; i++) {
		printf("%c %d\n", A[i].ch, A[i].num);
	}


	return 0;
}
