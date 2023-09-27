# include "bits/stdc++.h"
using namespace std;
using LL = long long;
using ULL = unsigned long long;
const double PI = acos(-1);
template<class T>constexpr T INF() { return ::std::numeric_limits<T>::max(); }
template<class T>constexpr T HINF() { return INF<T>() / 2; }
template <typename T_char>T_char TL(T_char cX) { return tolower(cX); };
template <typename T_char>T_char TU(T_char cX) { return toupper(cX); };
typedef pair<LL, LL> pii;
const int vy[] = { -1, -1, -1, 0, 1, 1, 1, 0 }, vx[] = { -1, 0, 1, 1, 1, 0, -1, -1 };
const int dx[4] = { 0,1,0,-1 }, dy[4] = { 1,0,-1,0 };
int popcnt(unsigned long long n) { int cnt = 0; for (int i = 0; i < 64; i++)if ((n >> i) & 1)cnt++; return cnt; }
int d_sum(LL n) { int ret = 0; while (n > 0) { ret += n % 10; n /= 10; }return ret; }
int d_cnt(LL n) { int ret = 0; while (n > 0) { ret++; n /= 10; }return ret; }
LL gcd(LL a, LL b) { if (b == 0)return a; return gcd(b, a%b); };
LL lcm(LL a, LL b) { LL g = gcd(a, b); return a / g*b; };
# define ALL(qpqpq)           (qpqpq).begin(),(qpqpq).end()
# define UNIQUE(wpwpw)        sort(ALL((wpwpw)));(wpwpw).erase(unique(ALL((wpwpw))),(wpwpw).end())
# define LOWER(epepe)         transform(ALL((epepe)),(epepe).begin(),TL<char>)
# define UPPER(rprpr)         transform(ALL((rprpr)),(rprpr).begin(),TU<char>)
# define FOR(i,tptpt,ypypy)   for(LL i=(tptpt);i<(ypypy);i++)
# define REP(i,upupu)         FOR(i,0,upupu)
# define INIT                 std::ios::sync_with_stdio(false);std::cin.tie(0)
# pragma warning(disable:4996)

int a[202020], n;

struct BIT {
	int bit[202020];
	void init() {
		REP(i, 202020)bit[i] = 0;
	}
	int sum(int i) {
		int s = 0;
		while (i>0) {
			s += bit[i];
			i -= i& -i;
		}
		return s;
	}
	void add(int i, int x) {
		while (i <= 202020) {
			bit[i] += x;
			i += i& -i;
		}
	}
};

vector<pair<LL,LL>> v;

int main() {
	BIT bit;
	bit.init();
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		v.emplace_back(make_pair(a[i],i));
	}
	sort(ALL(v));
	REP(i, n) {
		a[v[i].second] = i + 1;
	}
	LL ans = 0;
	for (int j = 0; j < n; j++) {
		ans += j - bit.sum(a[j]);
		bit.add(a[j], 1);
	}
	cout << ans << endl;
}
