#include "bits/stdc++.h"
using namespace std;

int main() {
	int N, A, B, C, X;
	while (cin >> N >> A >> B >> C >> X) {
		if (N == 0) return 0;
		vector<int> Y(N);
		for (int i = 0; i < N; i++) cin >> Y[i];
		int ANS = -1, NOW = 0;
		for (int i = 0; i <= 10000; i++) {
			if (X == Y[NOW]) NOW++;
			if (NOW == N) {
				ANS = i;
				break;
			}
			X = (X * A + B) % C;
		}
		cout << ANS << endl;
	}
}
