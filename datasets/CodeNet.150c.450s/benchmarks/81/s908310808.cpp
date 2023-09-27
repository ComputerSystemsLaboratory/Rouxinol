#include <iostream>

using namespace std;

int main() {
	int M;
	while (cin >> M, M) {
		bool v[10] = {0};
		int n = 10;
		int m[20][20]; fill(&m[0][0], &m[0][0]+20*20, 1e9);
		for (int i = 0; i < M; ++i) {
			int a, b, c; cin >> a >> b >> c;
			m[a][b] = m[b][a] = c;
			v[a] = v[b] = true;
		}
		for (int i = 0; i < n; ++i) m[i][i] = 0;

		for (int k = 0; k < n; ++k) for (int i = 0; i < n; ++i) for (int j = 0; j < n; ++j) {
			m[i][j] = min(m[i][j], m[i][k] + m[k][j]);
		}

		int ans = 1e9, aid = -1;
		for (int i = 0; i < n; ++i) {
			if (v[i]) {
				int s = 0;
				for (int j = 0; j < n; ++j) if (v[j]) s += m[i][j];
				if (s < ans) ans = s, aid = i;
			}
		}
		cout << aid << " " << ans << endl;
	}
}