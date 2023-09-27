#include "bits/stdc++.h"
using namespace std;

int main() {
	int N, A, B;
	while (cin >> N >> A >> B) {
		if (N == 0) return 0;
		vector<int> P(N);
		for (int i = 0; i < N; i++) cin >> P[i];
		int MAX = -1, ANS = -1;
		for (int i = A; i <= B; i++) {
			if (P[i - 1] - P[i] >= MAX) MAX = P[i - 1] - P[i], ANS = i;
		}
		cout << ANS << endl;
	}
}
