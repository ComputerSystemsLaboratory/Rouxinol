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
//	4
//	1
//	6
//	2
//	8
//	5
//	7
//	3

//	5 length=1
//	1 length=1
//	3 length=2
//	2 length=2
//	4 length=3
	int L[n];
	L[0] = A[0];
	int length = 1;
	for (int i = 1; i < n; ++i) {
		if (L[length - 1] < A[i]) {
			L[length++] = A[i];
		} else {
// L[j] (j ??? 0 ?????? lengh-1) ????????§ A[i] ??\?????¨??????????????? j ????????? = A[i]
			for (int j = 0; j < length; ++j) {
				if (L[j] >= A[i]) {
					L[j] = A[i];
					break;
				}
			}
		}
	}

	cout << length << endl;

	return 0;
}