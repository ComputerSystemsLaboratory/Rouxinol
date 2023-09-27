#include <iostream>
#include <algorithm>
using namespace std;
int main(void) {
	int N, A[101];
	cin >> N;
	for (int i = 0; i < N; i++) cin >> A[i];

	int temp;
	int cnt = 0;
	for (int i = 1; i < N; i++) {
		for (int j = i; j > 0; j--) {
			if (A[j - 1] <= A[j]) {
				break;
			}
			else {
				cnt++;
				temp = A[j - 1];
				A[j - 1] = A[j];
				A[j] = temp;
			}
		}
	}
	for (int j = 0; j < N-1; j++) cout << A[j] << " ";
	cout << A[N-1]<< endl;
	cout << cnt << endl;
	return 0;
}
