#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <queue>
using namespace std;
#define REP(i,n) for (int i=0;i<(n);++i)
#define rep(i,a,b) for(int i=a;i<(b);++i)
template<class T> inline bool chmin(T &a, T b){ if(a > b) { a = b; return true;} return false;}
template<class T> inline bool chmax(T &a, T b){ if(a < b) { a = b; return true;} return false;}
typedef long long ll;
typedef pair<int,int> pii;
const ll INF = 1LL << 60;
const ll MOD = 1e9 + 7;

// graph //
int V,E,r,from,to,weight;

struct Edge{
    int from,to,cost;
    Edge(int from,int to,int cost) : from(from),to(to),cost(cost){}
};

vector<vector<Edge> >  G;

int main() {
    cin.tie(0); ios_base::sync_with_stdio(false);
    cin >> V >> E >> r;
    G.resize(V);
    REP(i,E){
        cin >> from >> to >> weight;
        G[from].emplace_back(from,to,weight);
    }

    priority_queue<pii,vector<pii>, greater<pii> > pq;
    pq.push(pii(0,r));
    vector<ll> dist(V,INF);
    dist[r] = 0;
    while(!pq.empty()){
        pii v = pq.top();pq.pop();
        for(auto e : G[v.second]){
            if(dist[e.from] != INF && dist[e.to] > dist[e.from] + e.cost){
                dist[e.to] = dist[e.from] + e.cost;
                pq.push(pii(dist[e.to],e.to));
            }
        }
    }

    REP(i,V){
        if(dist[i]==INF) cout << "INF" << '\n';
        else cout << dist[i] << '\n';
    }
    return 0;
}
