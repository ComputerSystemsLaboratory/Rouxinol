#include <iostream>

using namespace std;

const int MAX_N = 100;

// 入力
int N, A, B, C, X;
int Y[MAX_N];

void solve() {
	int real = 0;
	int r = X;
	if (r == Y[real]) {
		real++;
		if (real == N) {
			cout << 0 << endl;
			return;
		}
	}
	for (int frame = 1; frame <= 10000; frame++) {
		r = (A * r + B) % C;
		if (r == Y[real]) {
			real++;
			if (real == N) {
				cout << frame << endl;
				return;
			}
		}
	}
	cout << -1 << endl;
	
	return;
}

int main() {
	while (true) {
		cin >> N >> A >> B >> C >> X;
		if (N == 0) {
			break;
		}
		for (int i = 0; i < N; i++) {
			cin >> Y[i];
		}
		solve();
	}
	
	return 0;
}