#include "bits/stdc++.h"
using namespace std;

int main() {
	int N, M, P;
	while (cin >> N >> M >> P) {
		if (N == 0 && M == 0 && P == 0) return 0;
		int A, B = 0;
		for (int i = 1; i <= N; i++) {
			int X;
			cin >> X;
			if (i == M) A = X;
			B += X;
		}
		if (A == 0) cout << 0 << endl;
		else cout << B * (100 - P) / A << endl;
	}
}
