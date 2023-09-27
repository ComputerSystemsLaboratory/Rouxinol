#include <cstdio>
#include <iostream>

using namespace std;

int main() {

	int n;
	scanf("%d", &n);

	int A[n];
	for (int i = 0; i < n; ++i) {
		scanf("%d", &A[i]);
	}
	int L[n];
	L[0] = A[0];
	int length = 1;
	for (int i = 1; i < n; ++i) {
		if (A[i] > L[length - 1]) {
			L[length++] = A[i];
		} else {
			int l = 0;
			int r = length;
			while (l < r) {
				int mid = (l + r) / 2;
				if (L[mid] < A[i]) {
					l = mid + 1;
				} else {
					r = mid;
				}
			}
			L[l] = A[i];
		}
	}
	cout << length << endl;

	return 0;
}