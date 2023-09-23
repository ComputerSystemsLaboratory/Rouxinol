#include <iostream>

using namespace std;

int main() {
	int N;
	while ( cin >> N, N ) {
		int m[21][21] = {0};
		for (int i = 0; i < N; ++i) {
			int x, y; cin >> x >> y;
			++m[y][x];
		}
		int px = 10, py = 10;
		int M; cin >> M;
		int ans = m[py][px];
		for (int i = 0; i < M; ++i) {
			char d; int l; cin >> d >> l;
			int dx = d == 'E' ? 1 : d == 'W' ? -1 : 0;
			int dy = d == 'N' ? 1 : d == 'S' ? -1 : 0;
			for (int j = 0; j < l; ++j) {
				px += dx, py += dy;
				ans += m[py][px];
				m[py][px] = 0;
			}
		}
		if (ans == N) cout << "Yes" << endl;
		else cout << "No" << endl;
	}
}