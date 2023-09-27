#include "bits/stdc++.h"
using namespace std;

int main() {
	int N;
	while (cin >> N) {
		if (N == 0) break;
		vector<int> A(N);
		for (int i = 0; i < N; i++) cin >> A[i];
		sort(A.begin(), A.end());
		int ANS = 100000000;
		for (int i = 0; i < N - 1; i++) {
			ANS = min(ANS, A[i + 1] - A[i]);
		}
		cout << ANS << endl;
	}
}
