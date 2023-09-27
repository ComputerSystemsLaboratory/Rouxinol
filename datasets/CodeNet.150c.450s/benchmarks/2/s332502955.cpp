// ALDS1_6_B.cpp
// Sort II - Partition

#include <iostream>
#include <vector>
#include <cstdio>
using namespace std;

int Partition(vector<int>& A, int p, int r)
{
	int tmp = A[r];
	int i = p - 1;
	for (int j = p; j < r; j++) {
		if (A[j] <= tmp) {
			i++;
			swap(A[i], A[j]);
		}
	}
	swap(A[++i], A[r]);
	return i;
}

int main()
{
	int n;
	cin >> n;
	vector<int> A(n);
	for (int i = 0; i < n; i++) {
		cin >> A[i];
	}
	int pivot = Partition(A, 0, n - 1);
	for (int i = 0; i < n; i++) {
		if (i > 0) cout << " ";
		if (i == pivot) printf("[%d]", A[i]);
		else cout << A[i];
	}
	cout << endl;
	return 0;
}