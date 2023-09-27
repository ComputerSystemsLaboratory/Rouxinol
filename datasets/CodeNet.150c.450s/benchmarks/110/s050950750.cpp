#include <iostream>
#include <string>
#include <algorithm>
#include <iomanip>
#include <vector>
#include <map>
#include <cmath>
#include <queue>
#include <utility>
#include <functional>
#include <deque>
#include <cctype>
#include <stack>
#include <bitset>
#include <set>

using ll = long long;
using namespace std;
typedef unsigned long long ull;
typedef pair<ll, ll>P;

const ll MOD = 1000000007;
const ll INF = 1 << 30;
const ll INF2 = 9000000000000000000LL;
const int dx[4] = { 1,0,-1,0 }, dy[4] = { 0,1,0,-1 };
const int tx[8] = { -1,0,1,-1,1,-1,0,1 }, ty[8] = { -1,-1,-1,0,0,1,1,1 };
#define ALL(x) (x).begin(),(x).end()

ll h, w, n, chx[10] = { 0 }, chy[10] = { 0 }, d[1010][1010] = { 0 };
char c[1010][1010];

int bfs(ll a, ll b, ll e, ll f) {
	queue<P> que;
	for (int i = 0;i < h;i++) {
		for (int j = 0;j < w;j++) {
			d[j][i] = INF;
		}
	}
	que.push(make_pair(a, b));
	d[a][b] = 0;
	while (que.size()) {
		P p = que.front();que.pop();
		if (p.first == e&&p.second == f) {
			break;
		}
		for (int i = 0;i < 4;i++) {
			ll nx = p.first + dx[i], ny = p.second + dy[i];
			if (0 <= nx&&nx < w && 0 <= ny&&ny < h&&c[nx][ny] != 'X'&&d[nx][ny] == INF) {
				que.push(make_pair(nx, ny));
				d[nx][ny] = d[p.first][p.second] + 1;
			}
		}
	}
	return d[e][f];
}


int main() {
	ll ans = 0;
	cin >> h >> w >> n;
	for (int i = 0;i < h;i++) {
		for (int j = 0;j < w;j++) {
			cin >> c[j][i];
			if (c[j][i] == 'S')chx[0] = j, chy[0] = i;
			else if (c[j][i] != 'S'&&c[j][i] != '.'&&c[j][i] != 'X') {
				chx[int(c[j][i] - '0')] = j, chy[(int)(c[j][i] - '0')] = i;
			}
		}
	}
	for (int i = 0;i < n;i++) {
		ans += bfs(chx[i], chy[i], chx[i + 1], chy[i + 1]);
	}
	cout << ans << endl;
}
