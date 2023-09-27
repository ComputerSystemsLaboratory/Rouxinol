#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

const int MAX_V = 1e5+1;
const ll INF = 1e18;

struct Edge {
    int to;
    ll cost;
    Edge(int to, ll cost):to(to), cost(cost) {}
};

struct Data {
    int v;
    ll x;
    Data(int v, ll x):v(v), x(x){}
    bool operator<(const Data& a) const {
        return x > a.x;
    }
};

vector<Edge> G[MAX_V];
ll dist[MAX_V];

int main() {
    int n,m,r;
    cin >> n >> m >> r;
    rep(i,m) {
        int s,t;
        ll d;
        cin >> s >> t >> d;
        G[s].emplace_back(t,d);
    }
    rep(i,n) dist[i] = INF;
    priority_queue<Data> que;
    auto push = [&] (int v, ll x) {
        if(dist[v] <= x) return;
        dist[v] = x;
        que.emplace(v,x);
    };
    push(r,0);

    while(que.size()) {
        Data hoge = que.top(); que.pop();
        int v = hoge.v;
        ll x = hoge.x;
        if(dist[v] < x) continue;
        for(auto e : G[v]) push(e.to, x + e.cost);
    }

    rep(i,n) {
        if(dist[i] != INF) cout << dist[i] << endl;
        else cout << "INF" << endl;
    }
}
