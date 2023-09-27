#include<iostream>
#include<vector>
#include<queue>
#include<utility>
using namespace std;

typedef pair<int, int> P;

int dx[8] = { 1,0,-1,0,1,1,-1,-1 }, dy[8] = { 0,1,0,-1,1,-1,1,-1 };

int main() {
	int w, h;
	while (cin >> w >> h, w) {
		vector<vector<int>>ma(w, vector<int>(h));
		for (int i = 0; i < h;i++) {
			for (int j = 0; j < w;j++) {
				cin >> ma[j][i];
			}
		}
		int ans = 0;
		for (int i = 0; i < w;i++) {
			for (int j = 0; j < h;j++) {
				if (ma[i][j] == 1) {
					ans++;
					queue<P> q;
					q.push(P(i, j));
					ma[i][j] = 0;
					while (!q.empty()) {
						P p = q.front(); q.pop();
						for (int k = 0; k < 8; k++) {
							int nx = p.first + dx[k], ny = p.second + dy[k];
							if (nx < w && nx>=0 && ny < h && ny>=0 && ma[nx][ny]==1) {
								ma[nx][ny] = 0; q.push(P(nx, ny));
							}
						}
					}
				}
			}
		}
		cout << ans << endl;
	}
}