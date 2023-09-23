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

using namespace std;

int Partition(int *A, int p, int r) {
	int x = A[r];
	int i = p - 1;
	for (int j = p; j < r; j++) {
		if (A[j] <= x) {
			i++;
			swap(A[i], A[j]);
		}
	}
	swap(A[i+1], A[r]);
	return i + 1;
}

void quickSort(int *A, int p, int r) {
	int q = Partition(A, p, r);
	int ifs = 1;
	for (int i = p; i <= r; i++) {
		if (ifs == 0)
			cout << " ";
		if (i == q)
			cout << "[" << A[i] << "]";
		else
			cout << A[i];
		ifs = 0;
	}
	cout << endl;
}

int main() {
	int n;
	cin >> n;
	int *A = new int[n];
	for (int i = 0; i < n; i++)
		cin >> A[i];
	quickSort(A, 0, n - 1);
	delete[] A;
	return 0;
}