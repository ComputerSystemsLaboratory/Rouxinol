#include <iostream>
#include <algorithm>
using namespace std;
int main(void) {
	int N, A[101];
	cin >> N;
	for (int i = 0; i < N; i++) cin >> A[i];

	int temp;
	int cnt = 0;
	for (int i = 0; i < N; i++) {
		int idx = i;
		for (int j = i; j < N; j++) {
			if (A[idx] > A[j]) {
				idx = j;
			}
		}
		if (idx != i) {
			temp = A[i];
			A[i] = A[idx];
			A[idx] = temp;
			cnt++;
		}
	}
	for (int j = 0; j < N-1; j++) cout << A[j] << " ";
	cout << A[N-1]<< endl;
	cout << cnt << endl;
	return 0;
}
