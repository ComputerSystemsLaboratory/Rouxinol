#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep0(n) for (int i = 0; i < (int)(n); i++)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = s; i < (int)(n); i++)
#define rep3(i, s, n) for (int i = s; i > (int)(n); i--)
#define all(obj) obj.begin(), obj.end()
#define from1(obj) obj.begin() + 1, obj.end()
#define db(x) cerr << #x << ":" << x << " "
#define dbl(x) cerr << #x << ":" << x << "\n"
#define dbp(p) cerr << #p << ":(" << p.first << ", " << p.second << ") "
#define dbpl(p) cerr << #p << ":(" << p.first << ", " << p.second << ")\n"
#define dbt3(t3) cerr << #t3 << ":(" << get<0>(t3) << ", " << get<1>(t3) << ", " << get<2>(t3) << ") "
#define dbt3l(t3) cerr << #t3 << ":(" << get<0>(t3) << ", " << get<1>(t3) << ", " << get<2>(t3) << ")\n"
#define dbt4(t4) cerr << #t4 << ":(" << get<0>(t4) << ", " << get<1>(t4) << ", " << get<2>(t4) << ", " << get<3>(t4) << ") "
#define dbt4l(t4) cerr << #t4 << ":(" << get<0>(t4) << ", " << get<1>(t4) << ", " << get<2>(t4) << ", " << get<3>(t4) << ")\n"
#define dbv(vec) cerr << #vec << ":{ "; for (auto e : vec) cerr << e << ", "; cerr << "}\n"
#define dbvp(vec) cerr << #vec << ":{ "; for (auto p : vec) cerr << "(" << p.first << ", " << p.second << "), "; cerr << "}\n"
#define dbvv(vv) cerr << #vv << ":{\n"; for (auto vec : vv) { cerr << "{ "; for (auto e : vec) cerr << e << ", "; cerr << "}\n"; } cerr << "}\n"
#define dbm(map) cerr << #map << ":{ "; for (auto p : map) cerr << "(" << p.first << ", " << p.second << "), "; cerr << "}\n"
#define YN(f) cout << (f ? "YES" : "NO") << "\n"
#define Yn(f) cout << (f ? "Yes" : "No") << "\n"
#define yn(f) cout << (f ? "yes" : "no") << "\n"
using ll = long long;
using vi = vector<int>; using vl = vector<ll>; using vs = vector<string>; using vb = vector<bool>;
using vvi = vector<vi>; using vvl = vector<vl>; using vvb = vector<vb>;
using pii = pair<int, int>; using pil = pair<int, ll> ; using pll = pair<ll, ll>; using pli = pair<ll, int>;
using vpii = vector<pii>; using vpll = vector<pll>;
using ti3 = tuple<int, int, int>; using tl3 = tuple<ll, ll, ll>;
using ti4 = tuple<int, int, int, int>; using tl4 = tuple<ll, ll, ll, ll>;
using mii = map<int, int>; using mil = map<int, ll>; using mll = map<ll, ll>; using mli = map<ll, int>;

const int INF = 1e8;
vi r, c;
vvi dp; // dp[i][j]:Ai~Ajのスカラー乗算の最小回数

int rec(int i, int j) {
	if (dp[i][j] != INF) return dp[i][j];
	int res = INF;
	rep2(k, i, j)	res = min(res, rec(i, k) + rec(k + 1, j) + r[i] * c[k] * c[j]);
	return dp[i][j] = res;
}

int main() {	
	// 行列の番号は0-ind, 0 ~ n-1
	int n; cin >> n;
	r.assign(n, 0); c.assign(n, 0);
	rep(i, n) cin >> r[i] >> c[i];
	dp.assign(n, {}); rep(i, n) dp[i].assign(n, INF);
	rep(i, n) rep(j, i + 1) dp[i][j] = 0;
	rep(i, n - 1) dp[i][i + 1] = r[i] * c[i] * c[i + 1];
	// dbvv(dp);
	rec(0, n - 1);
	// dbvv(dp);
	cout << dp[0][n - 1] << endl;
}
