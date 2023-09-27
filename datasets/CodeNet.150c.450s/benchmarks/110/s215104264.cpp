#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <algorithm>
#include <sstream>
#include <map>
#include <set>
#include <queue>

#define REP(i,k,n) for(int i=k;i<n;i++)
#define rep(i,n) for(int i=0;i<n;i++)
#define INF 1<<30
#define pb push_back
#define mp make_pair

using namespace std;
typedef long long ll;
typedef pair<int,int> P;

int h, w, n;
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

bool can(int y,int x) {
	if(0 <= y && y < h && 0 <= x && x < w) return true;
	return false;
}

int main() {
	cin >> h >> w >> n;

	vector<string> s(h);
	rep(i, h) cin >> s[i];

	int sx = -1, sy = -1;
	rep(i, h) {
		rep(j, w) {
			if(s[i][j] == 'S') {
				sy = i;
				sx = j;
			}
		}
	}

	int ans = 0, y = sy, x = sx;
	int d[1005][1005];
	bool used[1005][1005];

	rep(i, n) {
		queue<P> que;
		que.push(P(y, x));

		memset(used, 0, sizeof(used));
		used[y][x] = x;

		memset(d, 0, sizeof(d));
		int cnt = 0;

		while(que.size()) {
			P p = que.front();
			que.pop();

			if(s[p.first][p.second] == char('1' + i)) {
				ans += d[p.first][p.second];
				y = p.first;
				x = p.second;
				break;
			}

			rep(j, 4) {
				int ny = p.first + dy[j];
				int nx = p.second + dx[j];

				if(can(ny, nx) && !used[ny][nx] && s[ny][nx] != 'X') {
					used[ny][nx] = true;
					d[ny][nx] += d[p.first][p.second] + 1;
					que.push(P(ny, nx));
				}
			}
		}
	}

	cout << ans << endl;
	return 0;
}