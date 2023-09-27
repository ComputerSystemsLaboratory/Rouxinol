#include <bits/stdc++.h>

using namespace std;

int N, M;
bool feeld[25][25];

void solve() {
	int x = 10, y = 10;
	for (int i = 0; i < M; i++) {
		char c;
		int d;
		
		cin >> c >> d;
		if (c == 'N') {
			for (int j = 0; j < d; j++) {
				feeld[++y][x] = 0;
			}
		}
		if (c == 'E') {
			for (int j = 0; j < d; j++) {
				feeld[y][++x] = 0;
			}
		}
		if (c == 'S') {
			for (int j = 0; j < d; j++) {
				feeld[--y][x] = 0;
			}
		}
		if (c == 'W') {
			for (int j = 0; j < d; j++) {
				feeld[y][--x] = 0;
			}
		}
	}
	
	bool isok = true;
	for (int i = 0; i <= 20; i++) {
		for (int j = 0; j <= 20; j++) {
			isok *= !feeld[i][j];
		}	
	}
	
	if (isok) cout << "Yes" << endl;
	else cout << "No" << endl;
}

int main() {
	while (1) {
		cin >> N; if (N == 0) break;
		
		memset(feeld, 0, sizeof(feeld));
		for (int i = 0; i < N; i++) {
			int x, y; cin >> x >> y;
			feeld[y][x] = 1;
		}
		
		cin >> M;
		solve();
	}
	
	return 0;
}