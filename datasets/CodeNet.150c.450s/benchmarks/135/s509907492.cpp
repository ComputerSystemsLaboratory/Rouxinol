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
template <typename T_char>T_char TL(T_char cX) { return tolower(cX); };
template <typename T_char>T_char TU(T_char cX) { return toupper(cX); };
const int vy[] = { -1, -1, -1, 0, 1, 1, 1, 0 }, vx[] = { -1, 0, 1, 1, 1, 0, -1, -1 };
const int dx[4] = { 0,1,0,-1 }, dy[4] = { 1,0,-1,0 };
# define ALL(x)      (x).begin(),(x).end()
# define UNIQ(c)     (isok).erase(unique(ALL((isok))),(isok).end())
# define LOWER(s)    transform(ALL((maze)),(maze).begin(),TL<char>)
# define UPPER(s)    transform(ALL((maze)),(maze).begin(),TU<char>)
# define FOR(i,a,b)  for(LL i=(a);i<(b);i++)
# define RFOR(i,a,b) for(LL i=(a);i>=(b);i--)
# define REP(i,n)    FOR(i,0,n)
# define INIT        std::ios::sync_with_stdio(false);std::cin.tie(0)


int n, m;
int h[1510], w[1510];
LL hcnt[1500001] = {}, wcnt[1500001] = {};


int main() {
	while (cin >> n >> m&&n&&m) {
		for (int i = 1; i <= n; i++) {
			cin >> h[i];
		}
		for (int i = 1; i <= m; i++) {
			cin >> w[i];
		}
		REP(i, 1500001)hcnt[i] = wcnt[i] = 0;
		for (int i = 1; i <= n; i++) {
			int he = h[i];
			hcnt[he]++;
			for (int j = i + 1; j <= n; j++) {
				he += h[j];
				hcnt[he]++;
			}
		}
		for (int i = 1; i <= m; i++) {
			int he = w[i];
			wcnt[he]++;
			for (int j = i + 1; j <= m; j++) {
				he += w[j];
				wcnt[he]++;
			}
		}
		LL ans = 0;
		REP(i, 1500001) {
			if(i)ans += wcnt[i] * hcnt[i];
		}
		cout << ans << endl;
	}
}
