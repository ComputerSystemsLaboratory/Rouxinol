#include<cstdio>
#include <iostream>
#include<algorithm>
#include<string>
#include<queue>
#include<vector>
#include<functional>
#include<cmath>
#include<map>
#include<stack>
#include<list>
#include<set>
#include<numeric>

#define MOD 1000000007

using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int H, W, N;
int d[1010][1010];
char field[1010][1010];

int dx[4] = { 1,0,-1,0 }, dy[4] = { 0,1,0,-1 };

int bfs(char s, char g) {
	queue<P> que;
	fill(d[0], d[1010], -1);
	for (int i = 0; i < H; i++) {
		for (int j = 0; j < W; j++) {
			if (field[i][j] == s) {
				que.push(P(i, j));
				d[i][j] = 0;
			}
		}
	}

	while (!que.empty()) {
		P p = que.front(); que.pop();
		if (field[p.first][p.second] == g)return d[p.first][p.second];

		for (int i = 0; i < 4; i++) {
			int ny = p.first + dy[i], nx = p.second + dx[i];
			if (0 <= nx && nx < W && 0 <= ny && ny < H && field[ny][nx] != 'X' &&
				d[ny][nx] == -1) {
				que.push(P(ny, nx));
				d[ny][nx] = d[p.first][p.second] + 1;
			}
		}
	}
	return -1;
}
int main()
{
	cin >> H >> W >> N;
	for (int i = 0; i < H; i++) {
		for (int j = 0; j < W; j++) {
			cin >> field[i][j];
		}
	}
	int ans = bfs('S','1');
	for (int i = 1; i < N; i++)
		ans += bfs(i + '0', i + 1 + '0');
	cout << ans << endl;
	return 0;
}