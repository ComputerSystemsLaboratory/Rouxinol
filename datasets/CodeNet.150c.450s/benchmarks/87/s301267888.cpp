#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for (int i = 0; i < (int) n; i++)
#define reps(i, n, m) for (int i = n; i < (int) m; i++)

int h, matrix[20][6];

bool init()
{
	cin >> h;
	if (h == 0) return false;
	for (int i = 0; i < 20; i++) {
		for (int j = 0; j < 5; j++) {
			matrix[i][j] = 0;
		}
	}
	for (int i = 0; i < h; i++) {
		cin >> matrix[h-i-1][0] >> matrix[h-i-1][1] >> matrix[h-i-1][2] >> matrix[h-i-1][3] >> matrix[h-i-1][4];
		matrix[i][5] = 0;
	}
	return true;
}

int calc(int a, int b) {
	return a * (b + 100) / 100;
}

void solve()
{
	int ans = 0;
	while (1) {
		int cflag = 0;
		for (int i = 0; i < h; i++) {
			int snode = 0, scnt = 1;
			for (int j = 1; j < 6; j++) {
				if (matrix[i][snode] == matrix[i][j] && matrix[i][snode] != 0) scnt++;
				else {
					if (scnt >= 3) {
						ans += scnt * matrix[i][snode];
						cflag = 1;
						//cout << snode<<endl;
						for (int k = 0; k < scnt; k++) matrix[i][snode+k] = 0;
						break;
					}
					else{
						scnt = 1;
						snode = j;
					}
				}
			}
		}
		if (cflag == 0) break;
		for (int i = 0; i < h; i++) {
			for (int j = 0; j < 5; j++) {
				for (int k = i; k > 0; k--) {
					if (matrix[k-1][j] == 0) swap(matrix[k-1][j], matrix[k][j]);
					else break;
				}
			}
		}	
	}
	cout << ans << endl;
}

int main()
{
	while (init()) {
		solve();
	}
}
