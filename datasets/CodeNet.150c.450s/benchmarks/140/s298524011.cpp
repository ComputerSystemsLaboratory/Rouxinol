#include <bits/stdc++.h>

#define rep(n) for(int i=0;i<n;i++)
#define repp(j, n) for(int j=0;j<n;j++)
#define reppp(i, m, n) for(int i=m;i<n;i++)
#define all(c) c.begin(), c.end()
#define rall(c) c.rbegin(), c.rend()
#define debug(x) cerr << #x << ": " << x << endl

using namespace std;

typedef long long ll;
typedef pair<ll, ll> Pll;
typedef pair<int, int> Pii;

struct Edge{
    int from, to; ll cost;
    Edge(int from, int to, ll cost){
        this->from = from;
        this->to = to;
        this->cost = cost;
    }
    bool operator<(const Edge &e) const{
        return cost < e.cost;
    }
    bool operator>(const Edge &e) const{
        return cost > e.cost;
    }
};

struct Graph{
    int V,E;
    vector<vector< pair<int, ll> > > edges;

    Graph(){
        cin >> V >> E;
        edges.resize(V);
        int s,t; ll w;
        rep(E){
            cin >> s >> t >> w;
            edges[s].emplace_back(t, w);
            edges[t].emplace_back(s, w);
        }
    }

    ll kruskal(){
        ll ret = 0LL;
        priority_queue<Edge, vector<Edge>, greater<Edge> > que;
        vector<bool> used(V, false);

        used[0] = true;
        for(pair<int, ll> e: edges[0])
            que.push(Edge(0, e.first, e.second));

        while(!que.empty()){
            Edge e = que.top(); que.pop();
            while(!que.empty() && used[e.to]){
                e = que.top(); que.pop();
            }
            if(used[e.to]) break;
            ret += e.cost;
            used[e.to] = true;
            for(pair<int, ll> next: edges[e.to])
                if(!used[next.first]) que.push(Edge(e.to, next.first, next.second));
        }
        return ret;
    }
};

int main(){
    Graph g = Graph();
    cout << g.kruskal() << endl;
}
