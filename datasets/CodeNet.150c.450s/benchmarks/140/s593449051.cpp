/*
このコード、と～おれ!
Be accepted!
∧＿∧　
（｡･ω･｡)つ━☆・*。
⊂　　 ノ 　　　・゜+.
　しーＪ　　　°。+ *´¨)
 　　　　　　　　　.· ´¸.·*´¨) ¸.·*¨)
		  　　　　　　　　　　(¸.·´ (¸.·'* ☆
*/

#include <cstdio>
#include <algorithm>
#include <string>
#include <cmath>
#include <cstring>
#include <vector>
#include <numeric>
#include <iostream>
#include <random>
#include <map>
#include <unordered_map>
#include <queue>
#include <regex>
#include <functional>
#include <complex>
#include <list>
#include <cassert>
#include <iomanip>
#include <set>
/*多倍長整数/cpp_intで宣言
#include <boost/multiprecision/cpp_int.hpp>
using namespace boost::multiprecision;
*/

//#pragma gcc target ("avx2")
//#pragma gcc optimization ("o3")
//#pragma gcc optimization ("unroll-loops")
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define rep1(i, n) for(int i = 1; i <= (n); ++i)
#define rep2(i, n) for(int i = 2; i < (n); ++i)
#define repr(i, n) for(int i = n; i >= 0; --i)
#define reprm(i, n) for(int i = n - 1; i >= 0; --i)
#define printynl(a) printf(a ? "yes\n" : "no\n")
#define printyn(a) printf(a ? "Yes\n" : "No\n")
#define printYN(a) printf(a ? "YES\n" : "NO\n")
#define printim(a) printf(a ? "possible\n" : "imposible\n")
#define printdb(a) printf("%.50lf\n", a) //少数出力
#define printdbd(a) printf("%.16lf\n", a) //少数出力(桁少なめ)
#define prints(s) printf("%s\n", s.c_str()) //string出力
#define all(x) (x).begin(), (x).end()
#define allsum(a, b, c) ((a + b) * c / 2.0) //等差数列の和、初項,末項,項数
#define pb push_back
#define priq priority_queue
#define rpriq priq<int, vector<int>, greater<int>>
#define deg_to_rad(deg) (((deg)/360.0)*2.0*PI)
#define rad_to_deg(rad) (((rad)/2.0/PI)*360.0)
#define Please return
#define AC 0
#define addf(T) [](T a, T b){return (a + b);}
#define minf(T) [](T a, T b){return min(a, b);}
#define maxf(T) [](T a, T b){return max(a, b);}
#define nopf(T) [](T a){return a;}
#define manhattan_dist(a, b, c, d) (abs(a - c) + abs(b - d)) /*(a, b) から (c, d) のマンハッタン距離 */


using ll = long long;

constexpr int INF = 1073741823;
constexpr int MINF = -1073741823;
constexpr ll LINF = ll(4661686018427387903);
constexpr ll MOD = 1000000007;
const long double PI = acos(-1.0L);

using namespace std;

void scans(string& str) {
	char c;
	str = "";
	scanf("%c", &c);
	if (c == '\n')scanf("%c", &c);
	while (c != '\n' && c != -1 && c != ' ') {
		str += c;
		scanf("%c", &c);
	}
}

void scanc(char& str) {
	char c;
	scanf("%c", &c);
	if (c == -1)return;
	while (c == '\n') {
		scanf("%c", &c);
	}
	str = c;
}

double acot(double x) {
	return PI / 2 - atan(x);
}

ll gcd(ll a, ll b) {
	if (b == 0) return a;
	return gcd(b, a % b);
}

ll lcm(ll number1, ll number2) {
	return number1 / gcd(number1, number2) * number2;
}

ll LSB(ll n) { return (n & (-n)); }

/*-----------------------------------------ここからコード-----------------------------------------*/

//0-indexed
struct unionfind {
	vector<ll> par, siz;

	unionfind(ll n) : par(n), siz(n) {
		for (ll i = 0; i < n; ++i) {
			//全部根で初期化
			par[i] = i;
			//サイズは1
			siz[i] = 1;
		}
	}

	void init(ll n) {
		par.resize(n);
		siz.resize(n);
		for (ll i = 0; i < n; ++i) {
			//全部根で初期化
			par[i] = i;
			//サイズは1
			siz[i] = 1;
		}
	}

	//根を返す
	ll find(ll a) {
		return par[a] == a ? a : par[a] = find(par[a]);
	}

	//くっつける。元から同じだったらfalseを返す
	bool unite(ll a, ll b) {
		ll x = find(a), y = find(b);
		if (x == y)return false;
		else if (siz[x] < siz[y]) {
			par[x] = y;
			siz[y] += siz[x];
		}
		else if (siz[x] > siz[y]) {
			par[y] = x;
			siz[x] += siz[y];
		}
		else {
			par[x] = y;
			siz[y] += siz[x];
		}
		return true;
	}

	//同じ集合か判定する
	bool same(ll a, ll b) {
		return find(a) == find(b);
	}

	//サイズを返す
	ll size(ll a) {
		return siz[find(a)];
	}

	//同じ集合に属す葉を纏めて返す
	vector<ll> leaf(ll a) {
		vector<ll> x;
		ll n = par.size();
		for (ll i = 0; i < n; ++i)if (same(a, i))x.pb(i);
		return x;
	}

};

int main() {

	int v, e;
	scanf("%d%d", &v, &e);
	vector<tuple<int, int, int>> edge(e);
	rep(i, e) {
		scanf("%d%d%d", &get<1>(edge[i]), &get<2>(edge[i]), &get<0>(edge[i]));
	}
	sort(all(edge));
	unionfind tree(v);
	ll ans = 0;
	rep(i, e) {
		if (!tree.same(get<1>(edge[i]), get<2>(edge[i]))) {
			ans += get<0>(edge[i]);
			tree.unite(get<1>(edge[i]), get<2>(edge[i]));
		}
	}
	printf("%lld\n", ans);

	Please AC;
}

