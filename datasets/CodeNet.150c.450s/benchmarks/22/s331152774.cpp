#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <stack>
#include <queue>
#include <set>
#include <map>

using namespace std;

#define rep(i,n) for(int i=0;i<n;i++)
#define REP(i,a,n) for(int i=a;i<n;i++)

typedef long long ll;

#define MAX_V 1010
#define MAX_E 2010

struct edge {int from, to, cost;};
vector<edge> es;
int d[MAX_V];
int V, E;
int INF = 1e9;

// trueのとき負の閉路は存在しない
bool bellman_ford(int start)
{
    for (int i = 0; i < V; ++i) {
        d[i] = INF;
    }
    d[start] = 0;
    int loop_cnt = 0;
    while (true) {
        ++loop_cnt;
        bool update = false;
        for (int i = 0; i < E; ++i) {
            edge e = es[i];
            if (d[e.from] != INF && d[e.to] > d[e.from] + e.cost) {
                d[e.to] = d[e.from] + e.cost;
                update = true;
                if (loop_cnt == V) return true;
            }
        }
        if (!update) break;
    }
    return false;
}

void Main()
{
    int r; cin >> V >> E >> r;
    rep(i,E) {
        int from, to, cost; cin >> from >> to >> cost;
        es.push_back(edge{from,to,cost});
    }
    if (bellman_ford(r)) {
        cout << "NEGATIVE CYCLE" << endl;
        return;
    }
    rep(i,V) {
        if (d[i] == INF) cout << "INF" << endl;
        else cout << d[i] << endl;
    }
}

int main()
{
    // cin.tie(nullptr);
	// ios_base::sync_with_stdio(false);
	Main();
}

