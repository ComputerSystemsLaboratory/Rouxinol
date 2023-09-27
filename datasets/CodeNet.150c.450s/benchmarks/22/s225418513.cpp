#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <queue>
using namespace std;
#define REP(i,n) for (int i=0;i<(n);++i)
typedef long long ll;
const ll INF = 1LL << 60;
const ll MOD = 1e9 + 7;

// graph //
int V,E,r,from,to,weight;

struct Edge{
    int from,to,cost;
    Edge(int from,int to,int cost) : from(from),to(to),cost(cost){}
};

vector<Edge> edges;

int main() {
    cin.tie(0); ios_base::sync_with_stdio(false);
    cin >> V >> E >> r;
    REP(i,E){
        cin >> from >> to >> weight;
        edges.emplace_back(from,to,weight);
    }

    vector<ll> dist(V,INF);
    dist[r] = 0;
    REP(i,V){
        bool update = false;
        for(auto e : edges){
            if(dist[e.to] > dist[e.from] + e.cost && dist[e.from] != INF){
                update = true;
                dist[e.to] = dist[e.from] + e.cost;
                if(i == V-1){
                    cout << "NEGATIVE CYCLE" << '\n';
                    return 0;
                }
            }
        }
        if(!update) break;
    }

    REP(i,V){
        if(dist[i]==INF) cout << "INF" << '\n';
        else cout << dist[i] << '\n';
    }
    return 0;
}
