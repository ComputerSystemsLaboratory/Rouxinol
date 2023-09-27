#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <map>
#include <set>
#include <vector>
#include <stack>
#include <queue>
#include <bitset>
#include <algorithm>
#include <numeric>
#include <functional>
using namespace std;

#define Rep(b, e, i) for(int i = b; i <= e; i++)
#define Repr(e, b, i) for(int i = e; i >= b; i--)
#define rep(n, i) Rep(0, n-1, i)
#define repr(n, i) Repr(n-1, 0, i)
#define all(v) (v).begin(), (v).end()
#define pb(v) push_back(v)
#define uniq(v) (v).erase(unique(all(v)),(v).end())
#define bitcnt(x) __builtin_popcount(x)
#define fst first
#define snd second
#define Pqaz(T) priority_queue<T,vector<T>,greater<T>>
#define Pqza(T) priority_queue<T>
#define ENJYU std::ios::sync_with_stdio(false);std::cin.tie(0);

typedef long long ll;
typedef pair<ll, ll> llP;
typedef pair<int, int> intP;

//vector の中身を出力
template <class T>ostream &operator<<(ostream &o,const vector<T>&v)
{o<<"{";for(int i=0;i<(int)v.size();i++)o<<(i>0?", ":"")<<v[i];o<<"}";return o;}

const int MAX = 128;

vector <int> adj[MAX];
int d[MAX];

void solve(void){
	ENJYU;
	int N;
	cin >> N;
	rep(N, i) {
		int u, k;
		cin >> u >> k;
		u--;
		rep(k, i) {
			int v;
			cin >> v;
			v--;
			adj[u].pb(v);
		}
	}
	memset(d, -1, sizeof(d));
	queue <int> q;
	q.push(0);
	d[0] = 0;
	while (!q.empty()) {
		int n = q.front();
		q.pop();
		for (int nv : adj[n]) {
			if (d[nv] >= 0) {
				d[nv] = min(d[nv], d[n] + 1);
				continue;
			}
			d[nv] = d[n] + 1;
			q.push(nv);
		}
	}

	rep(N, i) cout << i+1 << ' ' << d[i] << endl;

}

int main(void){
	solve();
	//cout << "yui(*-v・)yui" << endl;
	return 0;
}

