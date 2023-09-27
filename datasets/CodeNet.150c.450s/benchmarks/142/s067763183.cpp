#include <iostream>
#include <vector>
using namespace std;
using ll = long long;

int main() {
	int N, K;
	cin >> N >> K;
	vector<ll> A(N);
	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}
	for (int i = 0; i < N - K; i++) {
		if (A[i] < A[i + K]) {
			cout << "Yes" << endl;
		} else {
			cout << "No" << endl;
		}
	}
	return 0;
}
