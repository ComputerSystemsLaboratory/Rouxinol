#include <bits/stdc++.h>
#include <fstream>
#define inputtxt() std::ifstream in("input.txt"); std::cin.rdbuf(in.rdbuf())
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(obj) (obj).begin(), (obj).end()


struct edge{
    int to, cost;
    edge(int t, int c) { to = t; cost = c;}
};
struct vertex{
    int number, cost;
    vertex(int n, int c) { number = n; cost = c;}
    bool operator> (const vertex &a) const{
        return cost > a.cost;
    }
};
vector<vector<edge>> graph;
const int INF = INT_MAX;
vector<int> dist;
vector<int> prv;

//If a graph has a closed path, it returns true.
bool bellmanford(int n, int start){
    dist = vector<int>(n,INF);
    prv  = vector<int>(n,-1);
    dist[start] = 0;
    for(int i=0; i<n+1; i++){
        for(int v=0; v<n; v++){
            for(edge e : graph[v]){
                if(dist[v]==INF || dist[v] + e.cost >= dist[e.to]) continue;
                dist[e.to] = dist[v] + e.cost;
                prv[e.to] = v;
                if(i == n) return true;
            }
        }
    }
    return false;
}

int main() {
    int V, E, r;
    cin >> V >> E >> r;
    graph = vector<vector<edge>>(V);
    rep(i,E){
        int s, t, d;
        cin >> s >> t >> d;
        graph[s].push_back(edge(t,d));
    }
    if(bellmanford(V, r)){
        cout << "NEGATIVE CYCLE" << endl;
        return 0;
    }
    rep(i,V){
        if(dist[i]!=INF){
            cout << dist[i] << endl;
        }else{
            cout << "INF" << endl;
        }
    }
    return 0;
}
