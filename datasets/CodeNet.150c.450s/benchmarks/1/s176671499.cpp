#include <cstdio>
#include <iostream>

using namespace std;

int main() {
	int n;
	scanf("%d", &n);

	int A[n];
	for (int i = 0; i < n; ++i) {
		int v;
		scanf("%d", &v);
		A[i] = v;
	}

	int L[n];
	L[0] = A[0];
	int length = 1;
	for (int i = 1; i < n; ++i) {
		if (L[length - 1] < A[i]) {
			L[length++] = A[i];
		} else {
// L[j] (j ??? 0 ?????? lengh-1) ????????§ A[i] ??\?????¨??????????????? j ????????? = A[i]
			int left = 0;
			int right = length;
			int mid = (left + right) / 2;

			while (left < right) {
				if (L[mid] >= A[i]) {
					right = mid;
				} else {
					left = mid + 1;
				}
				mid = (left + right) / 2;
			}
			L[mid] = A[i];
		}
	}

	cout << length << endl;

	return 0;
}