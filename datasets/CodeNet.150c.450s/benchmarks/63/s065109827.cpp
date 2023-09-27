#include <bits/stdc++.h>
#define rep(i, a, n) for(int i = a; i < n; i++)
#define repp(i, n) rep(i, 0, n)
#define repb(i, a, b) for(int i = a; i >= b; i--)
#define all(a) a.begin(), a.end()
#define int long long
using namespace std;
typedef pair<int, int> P;

const int INF = 1e15;

int n, m, r;
vector<int> d;

struct edge{
    int to, cost;
    edge(int to, int cost): to(to), cost(cost){}
};

vector<vector<edge> > G;

void dijkstra(int s){
    priority_queue<P, vector<P>, greater<P> > q;
    d.clear();
    d.resize(n, INF);
    d[s] = 0;
    q.push(P(d[s], s));

    while(q.size()){
        P p = q.top(); q.pop();
        int v = p.second;
        if(d[v] < p.first) continue;
        rep(i, 0, G[v].size()){
            edge e = G[v][i];
            if(d[e.to] > d[v] + e.cost){
                d[e.to] = d[v] + e.cost;
                q.push(P(d[e.to], e.to));
            }
        }
    }
    return;
}

signed main(){
    cin >> n >> m >> r;
    G.clear();
    G.resize(n, vector<edge>());
    rep(i, 0, m){
        int s, t, c;
        cin >> s >> t >> c;
        G[s]. push_back(edge(t, c));
        // G[t]. push_back(edge(s, c));
    }
    
    dijkstra(r);
    rep(i, 0, n){
        if(d[i] == INF) cout << "INF" << endl;
        else cout << d[i] << endl;
    }
}