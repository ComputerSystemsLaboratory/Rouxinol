#include <bits/stdc++.h>

using namespace std;

int solve(int N, int P) {
	int p = P;
	vector<int> have(N, 0);
	int turn = 0;
	while (1) {
		if (p > 0) {
			--p;
			if (++have[turn] == P) return turn;
		}
		else {
			swap(p, have[turn]);
		}
		turn = (turn + 1) % N;
	}
}

int main() {
	int N, P;
	while (cin >> N >> P, N || P) {
		cout << solve(N, P) << endl;
	}
}