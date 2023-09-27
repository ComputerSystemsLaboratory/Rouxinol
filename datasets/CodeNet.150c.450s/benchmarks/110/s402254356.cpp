# include <iostream>
# include <algorithm>
# include <vector>
# include <string>
# include <set>
# include <map>
# include <cmath>
# include <iomanip>
# include <functional>
# include <utility>
# include <stack>
# include <queue>
# include <list>
# include <tuple>
# include <unordered_map>
# include <numeric>
# include <complex>
# include <bitset>
# include <random>
# include <chrono>
# include <cstdlib>
# include <tuple>
using namespace std;
using LL = long long;
using ULL = unsigned long long;
constexpr int INF = 2147483647;
constexpr int HINF = INF / 2;
constexpr double DINF = 100000000000000000.0;
constexpr double HDINF = 50000000000000000.0;
constexpr long long LINF = 9223372036854775807;
constexpr long long HLINF = 4500000000000000000;
const double PI = acos(-1);
int dx[4] = { 0,1,0,-1 }, dy[4] = { 1,0,-1,0 };
template <typename T_char>T_char TL(T_char cX) { return tolower(cX); };
template <typename T_char>T_char TU(T_char cX) { return toupper(cX); };
# define ALL(x)      (x).begin(),(x).end()
# define UNIQ(c)     (c).erase(unique(ALL((c))),(c).end())
# define LOWER(s)    transform(ALL((s)),(s).begin(),TL<char>)
# define UPPER(s)    transform(ALL((s)),(s).begin(),TU<char>)
# define FOR(i,a,b)  for(LL i=(a);i<(b);i++)
# define RFOR(i,a,b) for(LL i=(a);i>=(b);i--)
# define REP(i,n)    FOR(i,0,n)
# define INIT        std::ios::sync_with_stdio(false);std::cin.tie(0)

string maze[1001];
int h, w;
int sx, sy, gx, gy;

int d[1001][1001];
int bfs() {
	queue<pair<int, int>> que;
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			d[i][j] = HINF;
		}
	}
	que.push(pair<int, int>(sx, sy));
	d[sy][sx] = 0;
	while (que.size()) {
		pair<int, int> p = que.front();
		que.pop();
		for (int i = 0; i < 4; i++) {
			int nx = p.first + dx[i], ny = p.second + dy[i];
			if (0 <= nx&&nx < w && 0 <= ny&&ny < h &&maze[ny][nx] != 'X'&&d[ny][nx] == HINF) {
				que.push(pair<int, int>(nx, ny));
				d[ny][nx] = d[p.second][p.first] + 1;
			}
		}
	}
	return d[gy][gx];
}
int n;

int main() {
	cin >> h >> w >> n;
	REP(i, h)cin >> maze[i];
	LL ans = 0;
	for (int k = 1; k <= n; k++) {
		REP(i, h)REP(j, w) {
			if (k == 1) {
				if (maze[i][j] == 'S') {
					sx = j, sy = i;
				}
				if (maze[i][j] == '1') {
					gx = j, gy = i;
				}
			}
			else {
				if (maze[i][j] == (char)('0' + k - 1)) {
					sx = j, sy = i;
				}
				if (maze[i][j] == (char)('0' + k)) {
					gx = j, gy = i;
				}
			}
		}
		ans += bfs();
	}
	cout << ans << endl;
}
