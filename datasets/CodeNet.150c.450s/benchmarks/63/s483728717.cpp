#include<bits/stdc++.h>
#define rep(i,n) for(int i = 0;i<n;i++)
using namespace std;
typedef pair<int,int> P;
typedef long long ll;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0;}
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0;}

const long long INF = 1LL << 60;

struct Edge {
    long long from;
    long long to;
    long long cost;
    Edge(int s, int d) : to(s),cost(d) {}
};

using Graph = vector<vector<Edge>>;
using Edges = vector<Edge>;
 
/* dijkstra(G,s,dis)
    入力：グラフ G, 開始点 s, 距離を格納する dis
    計算量：O(|E|log|V|)
    副作用：dis が書き換えられる
*/
void dijkstra(const Graph &G, int s, vector<long long> &dis) {
    int N = G.size();
    dis.resize(N, INF);
    priority_queue<P, vector<P>, greater<P>> pq;  // 「仮の最短距離, 頂点」が小さい順に並ぶ
    dis[s] = 0;
    pq.emplace(dis[s], s);
    while (!pq.empty()) {
        P p = pq.top();
        pq.pop();
        int v = p.second;
        if (dis[v] < p.first) {  // 最短距離で無ければ無視
            continue;
        }
        for (auto &e : G[v]) {
            if (dis[e.to] > dis[v] + e.cost) {  // 最短距離候補なら priority_queue に追加
                dis[e.to] = dis[v] + e.cost;
                pq.emplace(dis[e.to], e.to);
            }
        }
    }
}    
 
/* bellman_ford(Es,s,t,dis)
    入力: 全ての辺Es, 頂点数V, 開始点 s, 最短経路を記録するdis
    出力: 負の閉路が存在するなら ture
    計算量：O(|E||V|)
    副作用：dis が書き換えられる
*/
bool bellman_ford(const Edges &Es, int V, int s, vector<long long> &dis) {
    dis.resize(V, INF);
    dis[s] = 0;
    int cnt = 0;
    while (cnt < V) {
        bool end = true;
        for (auto e : Es) {
            if (dis[e.from] != INF && dis[e.from] + e.cost < dis[e.to]) {
                dis[e.to] = dis[e.from] + e.cost;
                end = false;
            }
        }
        if (end) break;
        cnt++;
    }
    return (cnt == V);
}

 int main() {
        ll V,E,r;
        cin >> V >> E >> r;
        vector<ll>dist;
        Graph G(V);
        rep(i,E) {
            ll a,b,c;
            cin >> a >> b >> c;
            G[a].push_back(Edge(b,c));
        }
        dijkstra(G,r,dist);
        rep(i,V) {
            if(dist[i] == INF) {
                cout << "INF" << endl;
                continue;
            }
            cout << dist[i] << endl;
        }
}
