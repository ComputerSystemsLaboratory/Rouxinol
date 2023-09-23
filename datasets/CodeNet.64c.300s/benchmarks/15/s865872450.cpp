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
		int mini = i;
		for(int j = i; j < n; ++j) {
			if(A[j] < A[mini]) {
				mini = j;
			}
		}
		if(mini != i) {
			int tmp = A[i];
			A[i] = A[mini];
			A[mini] = tmp;

			++cnt;
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