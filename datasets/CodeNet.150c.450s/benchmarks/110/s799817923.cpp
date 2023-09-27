#include <iostream>
#include <cstdio>
#include <map>
#include <queue>

using namespace std;

#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n) FOR(i,0,n)
#define MP make_pair

typedef pair<int, int> PII;

int h, w, n;
char maps[1000][1001];
int memo[1000][1000];

int serach(int y, int x, int num) {
	queue<PII> Q;
	int res = 0;
	REP(i, h) REP(j, w) memo[i][j] = -1;

	Q.push(MP(y, x));
	memo[y][x] = 0;
	while (! Q.empty()) {
		int dx[] = {0,1,0,-1}, dy[] = {1,0,-1,0};
		PII q = Q.front(); Q.pop();
		if (maps[q.first][q.second] == num + '0') {res = memo[q.first][q.second]; break;}

		REP(i, 4) {
			int nx = q.second + dx[i], ny = q.first + dy[i];
			if (! (nx >= 0 && nx < w && ny >= 0 && ny < h)) continue;
			if (maps[ny][nx] == 'X' || memo[ny][nx] > -1) continue;
			memo[ny][nx] = memo[q.first][q.second] + 1;
			Q.push(MP(ny, nx));
		}
	}

	return res;
}

int main() {
	int ans = 0;
	cin >> h >> w >> n;
	REP(i, h) scanf("%s", maps[i]);

	REP(i, h) REP(j, w) {
		if (maps[i][j] == 'S') ans += serach(i, j, 1);
		if (maps[i][j] >= '1' && maps[i][j] < n + '0') ans += serach(i, j, (maps[i][j] + 1) - '0');
	}
	cout << ans << endl;

	return 0;
}