#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int n, m;
int main() {
	vector<string> ans;int field[21][21];
	while (cin >> n, n) {
		for (int i = 0; i < 21; ++i) {
			for (int j = 0; j < 21; ++j) {
				field[i][j] = 0;
			}
		}
		for (int i = 0; i < n; ++i) {
			int x, y; cin >> x >> y;
			field[y][x] = 1;
		}
		int x = 10, y = 10;
		int cnt = 0;
		cin >> m;
		for (int i = 0; i < m; ++i) {
			char dir;
			int step;
			cin >> dir >> step;
			while (step--) {
				switch (dir) {
				case'N': y++; break;
				case'S': y--; break;
				case'E': x++; break;
				default:x--; break;
				}
				if (field[y][x]) {
					field[y][x] = 0;
					cnt++;
				}
			}
		}
		ans.push_back((cnt == n) ? "Yes" : "No");
	}
	for (int i = 0; i < ans.size(); ++i) {
		cout << ans[i] << endl;
	}

	return 0;
}
	
