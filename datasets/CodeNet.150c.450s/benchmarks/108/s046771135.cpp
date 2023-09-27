/*
Breadth First Search(https://onlinejudge.u-aizu.ac.jp/#/problems/ALDS1_11_C)
*/
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
#define rep(n, i) Rep(0, n-1, i)
#define pb(v) push_back(v)
#define ENJYU std::ios::sync_with_stdio(false);std::cin.tie(0);

const int MAX = 128;

//隣接リスト
vector <int> adj[MAX];
//頂点１からの距離
int d[MAX];

void solve(void){
	//init
	ENJYU;
	memset(d, -1, sizeof(d));
	//input
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
	//bfs
	queue <int> q;
	q.push(0);
	d[0] = 0;
	while (!q.empty()) {
		int n = q.front();
		q.pop();
		for (int nv : adj[n]) {
			if (d[nv] >= 0) {
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

