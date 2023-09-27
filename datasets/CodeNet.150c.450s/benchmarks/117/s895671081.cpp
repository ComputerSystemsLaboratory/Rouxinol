#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>

#define SENTINEL 1000000001

using namespace std;

int n, *S, cnt;

void printv(int v[], int len) {
	int ifs = 1;
	for (int i = 0; i < len; i++) {
		if (ifs == 0)
			cout << " ";
		cout << v[i];
		ifs = 0;
	}
	cout << endl;
}

void Merge(int A[], int left, int mid, int right) {
	int n1 = mid - left;
	int n2 = right - mid;
	int *L = new int[n1+1];
	int *R = new int[n2+1];
	memcpy(L, &A[left], sizeof(int) * n1);
	memcpy(R, &A[mid],  sizeof(int) * n2);
	L[n1] = SENTINEL;
	R[n2] = SENTINEL;
	for (int i = 0, j = 0, k = left; k < right; k++) {
		if (L[i] <= R[j]) {
			A[k] = L[i];
			i++;
		} else {
			A[k] = R[j];
			j++;
		}
		cnt++;
	}
	delete[] L;
	delete[] R;
}

void MergeSort(int A[], int left, int right) {
	if (left + 1 < right) {
		int mid = (left + right) / 2;
		MergeSort(A, left, mid);
		MergeSort(A, mid, right);
		Merge(A, left, mid, right);
	}
}

int main() {
	cnt = 0;
	cin >> n;
	S = new int[n];
	for (int i = 0; i < n; i++)
		cin >> S[i];
	MergeSort(S, 0, n);
	printv(S, n);
	cout << cnt << endl;
	delete[] S;
	return 0;
}