// #define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep0(N) for (int COUNTER = 0; COUNTER < (int)(N); COUNTER++)
#define rep(i, N) for (int i = 0; i < (int)(N); i++)
#define rep1(i, N) for (int i = 0; i < (int)(N); i++)
#define rep2(i, START, GOAL) for (int i = (int)(START); i < (int)(GOAL); i++)
#define rep3(i, START, GOAL) for (int i = (int)(START); i > (int)(GOAL); i--)
#define ALL(CONTAINER) CONTAINER.begin(), CONTAINER.end()
#define rALL(CONTAINER) CONTAINER.rbegin(), CONTAINER.rend()
#define from1(CONTAINER) CONTAINER.begin() + 1, CONTAINER.end()
#define rfrom1(CONTAINER) CONTAINER.rbegin(), CONTAINER.rend() - 1
#define dbout(X) cout << X << "\n"
#define dberr(X) cerr << X << "\n"
#define db(X) cerr << #X << ":" << (X) << " "
#define dbl(X) cerr << #X << ":" << (X) << "\n"
#define db2(X, Y) cerr << #X << ":" << (X) << ", " << #Y << ":" << (Y) << " "
#define db2l(X, Y) cerr << #X << ":" << (X) << ", " << #Y << ":" << (Y) << "\n"
#define dbl2(X, Y) cerr << #X << ":" << (X) << "\n" << #Y << ":" << (Y) << "\n"
#define db3(X, Y, Z) cerr << #X << ":" << (X) << ", " << #Y << ":" << (Y) << " " << #Z << ":" << (Z) << " "
#define db3l(X, Y, Z) cerr << #X << ":" << (X) << ", " << #Y << ":" << (Y) << ", " << #Z << ":" << (Z) << "\n"
#define dbl3(X, Y, Z) cerr << #X << ":" << (X) << "\n" << #Y << ":" << (Y) << "\n" << #Z << ":" << (Z) << "\n"
#define dbp(PAIR) cerr << #PAIR << ":(" << PAIR.first << ", " << PAIR.second << ") "
#define dbpl(PAIR) cerr << #PAIR << ":(" << PAIR.first << ", " << PAIR.second << ")\n"
#define dbt3(TUPLE3) cerr << #TUPLE3 << ":(" << get<0>(TUPLE3) << ", " << get<1>(TUPLE3) << ", " << get<2>(TUPLE3) << ") "
#define dbt3l(TUPLE3) cerr << #TUPLE3 << ":(" << get<0>(TUPLE3) << ", " << get<1>(TUPLE3) << ", " << get<2>(TUPLE3) << ")\n"
#define dbt4(TUPLE4) cerr << #TUPLE4 << ":(" << get<0>(TUPLE4) << ", " << get<1>(TUPLE4) << ", " << get<2>(TUPLE4) << ", " << get<3>(TUPLE4) << ") "
#define dbt4l(TUPLE4) cerr << #TUPLE4 << ":(" << get<0>(TUPLE4) << ", " << get<1>(TUPLE4) << ", " << get<2>(TUPLE4) << ", " << get<3>(TUPLE4) << ")\n"
#define dbv(VEC) cerr << #VEC << ":{ "; for (auto ELEM : VEC) cerr << ELEM << ", "; cerr << "}\n"
#define dbvp(VP) cerr << #VP << ":{ "; for (auto PAIR : VP) cerr << "(" << PAIR.first << ", " << PAIR.second << "), "; cerr << "}\n"
#define dbvv(VV) cerr << #VV << ":{\n"; for (auto VEC : VV) { cerr << "{ "; for (auto ELEM : VEC) cerr << ELEM << ", "; cerr << "},\n"; } cerr << "}\n"
#define dbvvp(VVP) cerr << #VVP <<":{\n"; for (auto VP : VVP) { cerr << "{ "; for (auto PAIR : VP) { cerr << "(" << PAIR.first << ", " << PAIR.second << "), "; } cerr << "},\n"; } cerr << "}\n";
#define dbm(MAP) cerr << #MAP << ":{ "; for (auto PAIR : MAP) cerr << "(" << PAIR.first << ", " << PAIR.second << "), "; cerr << "}\n"
#define YN(f) cout << (f ? "YES" : "NO") << "\n"
#define Yn(f) cout << (f ? "Yes" : "No") << "\n"
#define yn(f) cout << (f ? "yes" : "no") << "\n"
using ll = long long;
using vi = vector<int>; using vl = vector<ll>; using vs = vector<string>; using vb = vector<bool>;
using vvi = vector<vi>; using vvl = vector<vl>; using vvb = vector<vb>;
using pii = pair<int, int>; using pil = pair<int, ll> ; using pli = pair<ll, int>; using pll = pair<ll, ll>;
using vpii = vector<pii>; using vpll = vector<pll>;
using ti3 = tuple<int, int, int>; using tl3 = tuple<ll, ll, ll>;
using ti4 = tuple<int, int, int, int>; using tl4 = tuple<ll, ll, ll, ll>;
using mii = map<int, int>; using mil = map<int, ll>; using mli = map<ll, int>; using mll = map<ll, ll>;
using si = set<int>; using sl = set<ll>;
// db

// [D] Union-Find木（素集合データ構造）
vi par; // par[i]: 要素iの親
vi dep; // dep[i]: 要素iが根であるときは，iを含む木の最も深い要素の(根を0とした)深さ(rank)。iが根であるといえなければ dep[root(i)] とする。
vi siz; // siz[i]: 要素iが根であるときは，iを含む木の大きさ(要素数，size)。iが根であるといえなければ siz[root(i)] とする。

int root(int x) {
	if (par[x] == x) return x;
	else return par[x] = root(par[x]); // 縮約
}

void unite(int x, int y) {
	x = root(x); y = root(y);
	if (x == y) return;
	if (dep[x] > dep[y]) { // xを根とする木の方が深い場合
		par[y] = x; // xが根となる
		// siz[x] += siz[y];
	} else if (dep[x] < dep[y]) {
		par[x] = y;
		// siz[y] += siz[x];
	} else { // 深さが等しい場合，xを根とすることとする
		par[y] = x;
		dep[x] ++;
		// siz[x] += siz[y];
	}
}

bool same(int x, int y) {
	return root(x) == root(y);
}

void UF(int N) { // 0-ind，要素数Nでの初期化に使用する
	par.assign(N, -1); dep.assign(N, 0); siz.assign(N, 1);
	rep(i, N) par[i] = i; // 全ての要素につき自身が根であるとして初期化
}


// [E] クラスカル(Kruskal)法　※最小全域木。Union-Find木と合わせて用いる
int main() {
	int V, E; cin >> V >> E;
	priority_queue<ti3, vector<ti3>, greater<ti3>> q; // ti3の第1要素の降順
	rep0(E) {
		/* グラフ入力受取 */
		int s, t, w; cin >> s >> t >> w;
		q.push(ti3(w, s, t)); // (コスト, 始点, 終点) の順で格納
	}
	UF(V);
	int cnt = 0; // cnt: uniteの回数。V-1回行うと森が木になる
	int ans = 0; // sum of weight of edges
	while (cnt < V - 1) {
		int d, i, j; tie(d, i, j) = q.top(); q.pop();
		if (!same(i, j)) {
			unite(i, j);
			cnt++;
			ans += d;
		}
	}
	dbout(ans);
}

