#include <iostream>
#include <cstdio>
#include <cmath>
#include <vector>
#include <list>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <string>
#include <utility>
#include <algorithm>
#include <functional>
#include <deque>
#define INF 1e9
#define MAX_V 100000
using namespace std;

typedef long long ll;
typedef pair<int, int> P;   // first: 最短距離, second: 頂点のindex

struct edge { int to, cost; };

int main() {
    int V, E, r;
    vector<edge> G[MAX_V];
    cin >> V >> E >> r;
    for (int i = 0; i < E; ++i) {
        int s, t, d;
        cin >> s >> t >> d;
        G[s].push_back(edge{t, d});
    }
    
    int d[MAX_V];
    fill(d, d + MAX_V, INF);
    d[r] = 0;
    priority_queue<P,vector<P>,greater<P>> que;
    que.push(P(0, r));
    
    while(!que.empty()) {
        P p = que.top(); que.pop();
        int v = p.second;
        
        if (d[v] < p.first) continue;
        
        for (int i = 0; i < G[v].size(); ++i) {
            edge e = G[v][i];
            if (d[v] + e.cost < d[e.to]) {
                d[e.to] = d[v] + e.cost;
                que.push(P(d[e.to], e.to));
            }
        }
    }
    
    for (int i = 0; i < V; ++i) {
        if (d[i] == INF)
            cout << "INF";
        else
            cout << d[i];
        cout << endl;
    }
    
    return 0;
}

