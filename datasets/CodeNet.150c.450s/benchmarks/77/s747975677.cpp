#include "bits/stdc++.h"
using namespace std;
int main(){
	cin.tie(0); ios::sync_with_stdio(false);
	int N, M;
	while (cin >> N, N) {
		vector<vector<int>> masu(21, vector<int>(21, 0));
		for (int i = 0; i < N;i++) {
			int x, y; cin >> x >> y;
			masu[x][y] = 1;
		}
		cin >> M;
		pair<int, int> now = { 10,10 };
		for (int i = 0; i < M;i++) {
			char d; int l; cin >> d >> l;
			int& X = now.first, &Y = now.second;
			if (d == 'N') {
				for (int j = 1; j <= l;j++) {
					if (masu[X][Y + j] == 1) masu[X][Y + j] = 0;
				}
				Y = Y + l;
			}
			if (d == 'E') {
				for (int j = 1; j <= l;j++) {
					if (masu[X + j][Y] == 1) masu[X + j][Y] = 0;
				}
				X = X + l;
			}
			if (d == 'S') {
				for (int j = 1; j <= l;j++) {
					if (masu[X][Y - j] == 1) masu[X][Y - j] = 0;
				}
				Y = Y - l;
			}
			if (d == 'W') {
				for (int j = 1; j <= l;j++) {
					if (masu[X - j][Y] == 1) masu[X - j][Y] = 0;
				}
				X = X - l;
			}
			//cout << "point: " << now.first << " " << now.second << endl;
		}
		bool f = false;
		for (int i = 0; i <= 20;i++) {
			for (int j = 0; j <= 20;j++) {
				if (masu[i][j] == 1)f = true;
			}
		}
		if (f) cout << "No" << endl;
		else cout << "Yes" << endl;
	}
}