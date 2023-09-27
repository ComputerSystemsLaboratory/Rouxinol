#include <iostream>
#include <algorithm>
using namespace std;
int main(void) {
	int N, R[200001];
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> R[i];
	}
	int max = R[N - 1];
	int out = R[1] - R[0];
	for (int i = N-2; i >= 0; i--) {
		if (max - R[i] > out) {
			out = max - R[i];
		}
		if (R[i] > max) {
			max = R[i];
		}
	}
	cout << out << endl;
	return 0;
}
