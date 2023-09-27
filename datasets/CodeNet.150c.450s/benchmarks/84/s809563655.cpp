#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <stack>
#include <vector>
#include <algorithm>
#include <cmath>
#include <climits>

using namespace std;

const double PI = 3.14159265358979;

long long SUM = 0;

void printArr(int a[], int len) {

	for (int i = 0; i < len; i++)
	{
		if (i == 0) cout << a[0];
		else cout << " " << a[i];
	}
	cout << endl;
}

long long merge_inv(int a[], int left, int mid, int right) {

	int Llen = mid - left;
	int Rlen = right - mid;
	int* L = new int[Llen + 1];
	int* R = new int[Rlen + 1];
	R[Rlen] = L[Llen] = INT_MAX;
	for (int i = 0; i < Llen; i++) {
		L[i] = a[left + i];
	}
	for (int i = 0; i < Rlen; i++) {
		R[i] = a[mid + i];
	}
	// 3			6
	// 1 3 5 X     2 4 6 7 8 9 X
	// 
	long long sum = 0;
	int ll = 0, rr = 0;
	for (int i = left; i < right; i++) {
		if (L[ll] < R[rr]) {
			a[i] = L[ll++];
		}
		else {	//L[ll] >= R[rr]
			a[i] = R[rr++];
			sum += Llen - ll;
		}
	}


	delete[] L;
	delete[] R;

	return sum;
}

void mergeSort_inv(int a[], int left, int right) {

	if (left + 1 < right) {
		int mid = (left + right) / 2;
		mergeSort_inv(a, left, mid);
		mergeSort_inv(a, mid, right);
		SUM += merge_inv(a, left, mid, right);
	}
}


int main() {

	int n; cin >> n;
	int* a = new int[n];
	for (int i = 0; i < n; i++)	{
		scanf("%d", &a[i]);
	}


	mergeSort_inv(a, 0, n);

	cout << SUM << endl;

	return 0;
}

