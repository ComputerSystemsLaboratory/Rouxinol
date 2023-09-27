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

	int length = 1;
	int L[n];
	L[0] = A[0];
	for (int i = 1; i < n; ++i) {
		if (A[i] > L[length - 1]) {
			L[length] = A[i];
			++length;
		} else {
			int left = 0;
			int right = length;
			while (left < right) {
				int mid = (left + right) / 2;
				if (L[mid] >= A[i]) {
					right = mid;
				} else {
					left = mid + 1;
				}
			}
			L[right] = A[i];
		}
	}

	cout << length << endl;

	return 0;
}