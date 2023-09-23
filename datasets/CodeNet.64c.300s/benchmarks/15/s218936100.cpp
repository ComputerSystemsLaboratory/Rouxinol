#include <algorithm>
#include <cstdio>
#include <iostream>

using namespace std;

void print_ALDS1_02B(int A[], int n) {
	for (int i = 0; i < n; ++i) {
		if (i != 0)
			cout << " " << A[i];
		else
			cout << A[i];
	}
	cout << endl;
}

int main() {

	int n;
	scanf("%d", &n);

	int A[n];
	for (int i = 0; i < n; ++i) {
		scanf("%d", A + i);
	}

//selectionSort
	int cnt = 0;
	for (int i = 0; i < n; ++i) {
		bool flag = false;
		int min = i;
		for (int j = i + 1; j < n; ++j) {
			if (A[j] < A[min]) {
				min = j;
				flag = true;
			}
		}
		if (flag) {
			swap(A[min], A[i]);
			++cnt;
		}
	}
	print_ALDS1_02B(A, n);
	cout << cnt << endl;

	return 0;
}