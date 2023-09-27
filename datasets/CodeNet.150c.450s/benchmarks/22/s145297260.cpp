#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <climits>
#include <cmath>
#include <complex>
#include <map>
#include <set>
#include <vector>
#include <stack>
#include <queue>
#include <bitset>
#include <algorithm>
#include <numeric>
#include <functional>
#include <cassert>
#include <iomanip>
using namespace std;

#define Rep(b, e, i) for(int i = b; i <= e; i++)
#define rep(n, i) Rep(0, n-1, i)
#define ENJYU std::ios::sync_with_stdio(false);std::cin.tie(0);

const int MAX_V = 1024;
const int MAX_E = 2048;
const int INF = 1<<29;

struct edge {int from, to, cost;};

edge es[MAX_E];

int dis[MAX_V];
int V, E;
//ゴールに続く負の閉路が存在すればtrueを返す
bool bellmanford(int s) {
	rep(V, v) dis[v] = INF;
	dis[s] = 0LL;
	rep(V, i) {
		rep(E, e) {
			edge ne = es[e];
			if (dis[ne.from] != INF && dis[ne.to] > dis[ne.from] + ne.cost) {
				dis[ne.to] = dis[ne.from] + ne.cost;
				if (i == V-1) return true;
			}
		}
	}
	return false;
}

void solve(void){
	int r;
	cin >> V >> E >> r;
	rep(E, i)
	{
		int s, t, d;
		cin >> s >> t >> d;
		es[i] = edge{s, t, d};
	}

	if (bellmanford(r))
	{
		cout << "NEGATIVE CYCLE" << endl;
		return;
	}

	rep(V, i)
	{
		if (dis[i] == INF)
		{
			cout << "INF" << endl;
		}
		else
		{
			cout << dis[i] << endl;
		}
	}

}

int main(void){
	solve();
	//cout << "yui(*-v・)yui" << endl;
	return 0;
}

