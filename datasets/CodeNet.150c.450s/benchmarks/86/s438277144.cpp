#include "bits/stdc++.h"
using namespace std;
int main() {
	cin.tie(0); ios::sync_with_stdio(false);
	int N, M, P;
	while (true) {
		cin >> N >> M >> P;
		if (N == 0 && M == 0 && P == 0) break;
		vector<int> X(N + 1, 0);
		int Sum = 0;
		for (int i = 1; i <= N;i++) {
			cin >> X[i]; Sum += X[i];
		}
		if (X[M] == 0) {
			cout << 0 << endl;
			continue;
		}
		Sum = Sum *100 - Sum * P;
		cout << Sum / X[M] << endl;
	}
}