#include<algorithm>
#include<bitset>
#include<cassert>
#include<cfloat>
#include<climits>
#include<cmath>
#include<deque>
#include<functional>
#include<iomanip>
#include<iostream>
#include<map>
#include<queue>
#include<set>
#include<stack>
#include<string>
#include<unordered_map>
#include<unordered_set>
#include<utility>
#include<vector>
#include<complex>
#include<list>
#include<cstdio>

#define REP(i, n) for(int i = 0;i < n;i++)
#define REPR(i, n) for(int i = n;i >= 0;i--)
#define FOR(i, m, n) for(int i = m;i < n;i++)
#define FORR(i, m, n) for(int i = m;i >= n;i--)
#define SORT(v, n) sort(v, v+n);
#define VSORT(v) sort(v.begin(), v.end());
#define llong long long
#define pb(a) push_back(a)


using namespace std;

typedef long long int ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;




const int INF = 1e9 + 7;


/******************************************************************************************/


//繋げる方向を一方向にする
typedef struct union_find {

	vector<ll> pa;//親
	vector<ll> ra;//木の深さ
	vector<ll> siz;
	//n要素で初期化
	void init(ll n) {
		pa.resize(n);
		ra.resize(n);
		siz.resize(n);
		for (ll i = 0; i < n; i++) {
			pa[i] = i;/*各ノードに番号を振る,この時par[x]=xとなる時は木の根となる*/
			ra[i] = 0LL;/*各ノード自体の高さは0*/
			siz[i] = 1LL;
		}
	}
	//木の根を求める
	ll find(ll x) {
		if (pa[x] == x) {
			return x;/*根ならそのノードの番号を返す*/
		}
		else {
			return pa[x] = find(pa[x]);/*根でないならさらにノードの根を探す*/
		}
	}

	//xとyの属する集合を併合する
	void unite(ll x, ll y) {
		x = find(x);//xの根の番号を探す
		y = find(y);//yの根の番号を探す
		if (x == y) {//一致すればつながっている
			return;
		}
		pa[y] = x;
		siz[x] += siz[y];
	}

	//xとyが同じ集合に属するか判定
	bool same(ll x, ll y) {
		return find(x) == find(y);//同じ集合なら1、違うなら0が返る
	}
}UF;

int main() {

	cin.tie(0);
	ios::sync_with_stdio(false);
	cout << fixed << setprecision(10);

	
	int n, m, q;

	cin >> n >> m;

	UF tree;
	tree.init(n+10);

	for (int i = 0; i < m; i++)
	{
		int a, b;
		cin >> a >> b;
		if (a > b) {
			swap(a, b);
		}
		//b→a
		tree.unite(a, b);

	}

	cin >> q;

	for (int i = 0; i < q; i++)
	{
		int a, b;
		cin >> a >> b;
		if (tree.same(a, b)) {
			cout << "yes" << endl;
		}
		else
		{
			cout << "no" << endl;
		}
	}


	return 0;
}

