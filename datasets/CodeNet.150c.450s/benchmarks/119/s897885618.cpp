#include<iostream>
#include<algorithm>
#include<map>
#include<queue>
using namespace std;
#define REP(i, a, n) for(int i=a; i<n; i++)
#define RREP(i, a, n) for(int i=n-1; i>=a; i--)
#define INF 1000000000
#define MP(a, b) make_pair(a, b)
#define F first
#define S second

int dy[8] = { -1, -1, 0, 1, 1, 1, 0, -1 };
int dx[8] = { 0, 1, 1, 1, 0, -1, -1, -1 };
int main() {
	int w, h;
	while (cin >> w >> h, w || h) {
		bool field[52][52];
		int num[52][52];
		REP(i, 0, h + 2) REP(j, 0, w + 2) {
			if (i == 0 || j == 0 || i == h + 1 || j == w + 1) field[i][j] = 0;
		}
		REP(i, 1, h + 1) REP(j, 1, w + 1) cin >> field[i][j];
		REP(i, 0, h + 2) REP(j, 0, w + 2) num[i][j] = 0;
		
		int cnt = 1;
		REP(i, 1, h + 1) {
			REP(j, 1, w + 1) {
				if (!field[i][j] || num[i][j] != 0) continue;

				num[i][j] = cnt;

				queue<pair<int, int>> q;
				q.push(MP(i, j));
				while (!q.empty()) {
					int y = q.front().F;
					int x = q.front().S;
					q.pop();

					REP(k, 0, 8) {
						int ny = y + dy[k];
						int nx = x + dx[k];
						if (field[ny][nx] && num[ny][nx] == 0) {
							num[ny][nx] = cnt;
							q.push(MP(ny, nx));
						}
					}
				}

				cnt++;
			}
		}

		int ans = 0;
		REP(i, 0, h + 2) REP(j, 0, w + 2) {
			ans = max(ans, num[i][j]);
		}
		cout << ans << endl;
	}
	return 0;
}