#include <bits/stdc++.h>

using namespace std;

#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,n) FOR(i,0,n)

typedef pair<int, int> pii;

int main() {
	int h, w;
	
	while (cin >> h >> w, h || w) {
		string str[100];
		REP(i, h) cin >> str[i];
		
		int ans = 0;
		REP(i, h) REP(j, w) {
			if (str[i][j] != '.') {
				ans++;
				
				queue<pii> q;
				q.push(pii(j, i));
				
				while (!q.empty()) {
					int x = q.front().first, y = q.front().second;
					q.pop();
					if (str[y][x] == '.') continue;
					
					int dx[4] = {1,0,-1,0};
					int dy[4] = {0,1,0,-1};
					REP(k, 4) {
						int nx = x + dx[k], ny = y + dy[k];
						if (!(nx >= 0 && nx < w && ny >= 0 && ny < h)) continue;
						if (str[y][x] != str[ny][nx]) continue;
						q.push(pii(nx, ny));
					}
					str[y][x] = '.';
				}
				
			}
		}
		
		cout << ans << endl;
	}
	return 0;
}