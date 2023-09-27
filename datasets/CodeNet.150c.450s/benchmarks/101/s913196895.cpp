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
const int dx[4] = { -1,0,1,0 }, dy[4] = { 0,-1,0,1 };
const char dir[4] = { 'u','l','d','r' };
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


struct UnionFind {
	vector<int>Par, Rank;
	UnionFind(int n) {
		Par.resize(n);
		Rank.resize(n);
		for (int i = 0; i < n; i++) {
			Par[i] = i;
			Rank[i] = 0;
		}
	}

	int find(int x) {
		if (Par[x] == x) {
			return x;
		}
		else {
			return Par[x] = find(Par[x]);
		}
	}

	void unite(int  x, int y) {
		x = find(x);
		y = find(y);
		if (x == y) return;
		if (Rank[x] < Rank[y]) {
			Par[x] = y;
		}
		else {
			Par[y] = x;
			if (Rank[x] == Rank[y])Rank[x]++;
		}
	}

	bool same(int x, int y) {
		return find(x) == find(y);
	}
};

int main() {
	int n, m;
	cin >> n >> m;
	UnionFind uf(n);
	REP(i, m) {
		int s, t;
		cin >> s >> t;
		uf.unite(s, t);
	}
	int q;
	cin >> q;
	REP(qqq, q) {
		int s, t;
		cin >> s >> t;
		cout << (uf.same(s, t) ? "yes" : "no") << endl;
	}
}
