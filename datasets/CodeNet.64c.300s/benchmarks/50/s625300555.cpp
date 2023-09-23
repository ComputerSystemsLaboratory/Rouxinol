#include <iostream>
#define N 100

using namespace std;

int main() {
	ios::sync_with_stdio(false);

	int A[N], n, cnt = 0;

	cin >> n;
	for(int i = 0; i < n; ++i) {
		cin >> A[i];
	}

	for(int i = 0; i < n; ++i) {
		for(int j = n-1; j > i; --j) {
			if(A[j] < A[j-1]) {
				int tmp = A[j];
				A[j] = A[j-1];
				A[j-1] = tmp;

				++cnt;
			}
		}
	}

	for(int i = 0; i < n; ++i) {
		if(i != 0) {
			cout << " ";
		}
		cout << A[i];
	}
	cout << endl;

	cout << cnt << endl;
	return 0;
}