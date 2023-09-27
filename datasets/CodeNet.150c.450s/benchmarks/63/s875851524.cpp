#define _CRT_SECURE_NO_WARNINGS
// #define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define all(c) begin(c), end(c)
#define range(i,a,b) for(int i = a; i < (int)(b); i++)
#define rep(i,b) range(i,0,b)
#define eb emplace_back
typedef long long ll;
#define int ll
auto const inf = numeric_limits<int>::max()/4;
 
using Weight = int;
using Capacity = int;
struct Edge {
    int src, dst; Weight weight;
    Edge(int s, int d, int w) : src(s), dst(d), weight(w) {}
};
using Edges = vector<Edge>;
using Graph = vector<Edges>;
using Array = vector<Weight>;
using Matrix = vector<Array>;
 
pair<vector<Weight>, bool> spfa(const Graph &g, int s){
    const Weight inf = numeric_limits<Weight>::max()/4;
    const int n = g.size(); priority_queue<int> q;
    vector<Weight> dist(n, inf); vector<int> inQ(n);
    vector<int> count(n);
    dist[s] = 0; q.emplace(s); inQ[s] = true; ++count[s];
    bool negCycle = false;
    for(int i = 0; q.size(); i++){
        int v = q.top(); q.pop(); inQ[v] = false;
        for(auto &e : g[v]){
            if(dist[v] != inf && dist[e.dst] > dist[v] + e.weight){
                dist[e.dst] = dist[v] + e.weight;
                if(!inQ[e.dst]){
                    q.emplace(e.dst); inQ[e.dst] = true; ++count[e.dst];
                    if(count[e.dst] >= n){ negCycle = true; goto END; }
                }
            }
        }
    }
 END:;
    return make_pair(dist, !negCycle);
}
 
signed main(){
    int V,E,r;
    while(cin >> V >> E >> r){
        Graph g(V);
        rep(i,E){
            int a,b,c;
            cin >> a >> b >> c;
            g[a].eb(a,b,c);
        }
        bool ok;
        vector<Weight> dist;
        tie(dist, ok) = spfa(g,r);
        if(ok){
            for(int i = 0; i < (int)dist.size(); i++){
                if(dist[i] == inf) cout << "INF";
                else cout << dist[i];
                cout << endl;
            }
        } else {
            cout << "NEGATIVE CYCLE" << endl;
        }
    }
}