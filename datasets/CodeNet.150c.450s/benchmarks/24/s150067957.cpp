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
# include <array>
using namespace std;
using LL = long long;
using ULL = unsigned long long;
using D = double;
constexpr int INF = 2147483647;
constexpr int HINF = INF / 2;
constexpr double DINF = 100000000000000000.0;
constexpr double HDINF = 50000000000000000.0;
constexpr long long LINF = 9223372036854775807;
constexpr long long HLINF = 4500000000000000000;
const double PI = acos(-1);
template <typename T_char>T_char TL(T_char cX) { return tolower(cX); };
template <typename T_char>T_char TU(T_char cX) { return toupper(cX); };
typedef pair<LL, LL> pii;
const int vy[] = { -1, -1, -1, 0, 1, 1, 1, 0 }, vx[] = { -1, 0, 1, 1, 1, 0, -1, -1 };
const int dx[4] = { 0,1,0,-1 }, dy[4] = { 1,0,-1,0 };
int popcnt(unsigned long long n) { int cnt = 0; for (int i = 0; i < 64; i++)if ((n >> i) & 1)cnt++; return cnt; }
int d_sum(LL n) { int ret = 0; while (n > 0) { ret += n % 10; n /= 10; }return ret; }
int d_num(LL n) { int ret = 0; while (n > 0) { ret++; n /= 10; }return ret; }
LL gcd(LL a, LL b) { if (b == 0)return a; return gcd(b, a%b); };
LL lcm(LL a, LL b) { LL g = gcd(a, b); return a / g*b; };
# define ALL(qpqpq)           (qpqpq).begin(),(qpqpq).end()
# define RALL(qpqpq)           (qpqpq).rbegin(),(qpqpq).rend()
# define UNIQUE(wpwpw)        sort(ALL((wpwpw)));(wpwpw).erase(unique(ALL((wpwpw))),(wpwpw).end())
# define LOWER(epepe)         transform(ALL((epepe)),(epepe).begin(),TL<char>)
# define UPPER(rprpr)         transform(ALL((rprpr)),(rprpr).begin(),TU<char>)
# define FOR(i,tptpt,ypypy)   for(LL i=(tptpt);i<(ypypy);i++)
# define RFOR(i,tptpt,ypypy)  for(LL i=(tptpt);i>=(ypypy);i--)
# define REP(i,upupu)         FOR(i,0,upupu)
# define INIT                 std::ios::sync_with_stdio(false);std::cin.tie(0)

LL n, m;

int main() {
	while (cin >> n >> m) {
		if (n == 0 && m == 0)return 0;
		vector<pair<LL, LL>>v(n);
		REP(i, n) {
			cin >> v[i].second >> v[i].first;
		}
		sort(ALL(v));
		reverse(ALL(v));
		LL ans = 0;
		REP(i, n) {
			LL d = min(m, v[i].second);
			m -= d;
			ans += v[i].first*(v[i].second - d);
		}
		cout << ans << endl;
	}
}
