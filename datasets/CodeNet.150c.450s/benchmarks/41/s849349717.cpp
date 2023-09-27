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
    Edge(int s) : to(s) {}
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

 /* warshall_floyd(dist,prev)
    入力：初期化した dist, prev
    計算量：O(|V|^3)
    副作用：dis[i][j]にiからjへの最短路のコストを格納、prev[i][j]にiからjへの最短路でのjの1つ前の点を格納
*/
void warshall_floyd(vector<vector<long long>> &dist, vector<vector<long long>> &prev) {
    int V = dist.size();
    for (int k = 0; k < V; k++) {
        for (int i = 0; i < V; i++) {
            for (int j = 0; j < V; j++) {
                if (dist[i][k] + dist[k][j] < dist[i][j]) {
                    dist[i][j] = dist[i][k] + dist[k][j];
                    prev[i][j] = prev[k][j];
                }
            }
        }
    }
}
/* get_path(prev, s, t)
    入力：warshall_floyd で得た prev, スタート s, ゴール t
    出力：s から t への最短路のパス
*/
vector<int> get_path(const vector<vector<long long>> &prev, int s, int t) {
    vector<int> path;
    for (int cur = t; cur != s; cur = prev[s][cur]) {
        path.push_back(cur);
    }
    path.push_back(s);
    reverse(path.begin(), path.end());
    return path;
}
/* is_negative(dist)
    入力：warshall_floyd で得た dist
    出力：負の有向路を含むかどうか
*/
bool is_negative(const vector<vector<long long>> &dist) {
    int V = dist.size();
    for (int i = 0; i < V; i++) {
        if (dist[i][i] < 0) {
            return true;
        }
    }
    return false;
}

int main() {
    int V,E;
    cin >> V >> E;
    vector<vector<ll>>dist(V,vector<ll>(V));
    rep(i,V) rep(j,V) {
        if(i==j) dist[i][j] = 0;
        else dist[i][j] = INF;
    }
    rep(i,E) {
        int a,b,c;
        cin >> a >> b >> c;
        dist[a][b] = c;
    }
    vector<vector<ll>>prev(V,vector<ll>(V));
    warshall_floyd(dist,prev);
    if(is_negative(dist)) {
        cout << "NEGATIVE CYCLE" << endl;
        return 0;
    } else {
        rep(i,V) {
            rep(j,V) {
                if(dist[i][j] >= INF/2) {
                    cout << "INF";
                } else {
                    cout << dist[i][j];
                }
                if(j != V-1) cout << " ";
            }
            cout << endl;
        }
    }
}



