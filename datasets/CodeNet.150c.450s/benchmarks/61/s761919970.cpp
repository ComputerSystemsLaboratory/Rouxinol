#include <iostream>

using namespace std;

int main() {
	int N, A, B, C, X;
	while ( cin >> N >> A >> B >> C >> X, N || A || B || C || X ) {
		int Y[100];
		for (int i = 0; i < N; ++i) {
			cin >> Y[i];
		}
		int need[10001] = {0};
		int cnt = 0;
		for (int i = 0; i < N; ++i) {
			if ( !need[Y[i]] ) ++cnt;
			++need[Y[i]];
		}

		int ans = -1;
		int pos = 0;
		for (int t = 0; t <= 10000; ++t) {
			if (Y[pos] == X) {
				if (++pos == N) {
					ans = t;
					break;
				}
			}
			X = (A * X + B) % C;
		}
		cout << ans << endl;
	}
}