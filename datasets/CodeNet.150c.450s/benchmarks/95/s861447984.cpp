#include "bits/stdc++.h"
using namespace std;

int main() {
	int N;
	while (cin >> N) {
		if (N == 0) return 0;
		vector<int> V(N);
		for (int i = 0; i < N; i++) {
			char C, D;
			cin >> C >> D;
			if (C == 'l') V[i] = 0;
			else V[i] = 1;
		}
		int ANS = 0;
		for (int i = 0; i < N / 2; i++) {
			ANS += V[i * 2] != V[i * 2 + 1];
		}
		cout << ANS << endl;
	}
}
