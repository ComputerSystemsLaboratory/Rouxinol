#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using pint = pair<int, int>;

int main() {
	int N, K;
	cin >> N >> K;

	ll sum = 1;
	vector<ll> A(N);

	for (int i = 0; i < N; ++i) {
		cin >> A[i];
	}

	for (int i = K; i < N; ++i) {
		if (A[i] > A[i - K]) {
			cout << "Yes" << endl;
		}
		else {
			cout << "No" << endl;
		}
	}
	return 0;
}
