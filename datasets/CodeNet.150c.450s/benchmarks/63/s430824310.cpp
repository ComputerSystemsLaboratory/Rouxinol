#include <iostream>
#include <cstdlib>
#include <queue>
#include <vector>
#include <utility>
#include <climits>
using namespace std;

struct edge {int to, cost;};
typedef int Vertex;
typedef pair<int, Vertex> P;
typedef vector<vector<edge>> Graph;

Graph make_graph(const int V, const int E){
    Graph G(V);

    for(int i = 0; i < E; ++i){
        int s,t,d; cin >> s >> t >> d;
        G[s].emplace_back(edge{t, d});
    }

    return G;
}

// ???????????´???????????§??????????????¢????±???????
/*int dijkstra(Graph &G, Vertex s, Vertex t){
    vector<int> d(G.size(), INF);
    d[s] = 0;
    priority_queue<P, vector<P>, greater<P>> q;
    q.push(make_pair(0, s));

    while(!q.empty()){
        int cost = q.top().first;
        Vertex current = q.top().second;
        q.pop(); 
        
        if(t == current) break;

        if(d[current] < cost) continue;

        for(auto &e : G[current]){
            if(d[e.to] > d[current] + e.cost){
                d[e.to] = d[current] + e.cost;
                q.push(make_pair(d[e.to], e.to));
            }
        }
    }

    return d[t];
}*/

vector<int> dijkstra(Graph &G, Vertex s){
    vector<int> d(G.size(), INT_MAX);
    d[s] = 0;
    priority_queue<P, vector<P>, greater<P>> q;
    q.push(make_pair(0, s));

    while(!q.empty()){
        int cost = q.top().first;
        Vertex current = q.top().second;
        q.pop(); 
        
        if(d[current] < cost) continue;

        for(auto &e : G[current]){
            if(d[e.to] > d[current] + e.cost){
                d[e.to] = d[current] + e.cost;
                q.push(make_pair(d[e.to], e.to));
            }
        }
    }

    return d;
}

int main(){
    int V, E, r; cin >> V >> E >> r;
    Graph G = make_graph(V, E);
    vector<int> d = dijkstra(G, r);

    for(int v = 0; v < V; ++v){
        //int dist = dijkstra(G, r, v);
        //if(dist == INF) cout << "INF\n";
        //else cout << dist << endl;
        if(d[v] < INT_MAX) cout << d[v] << endl;
        else cout << "INF\n";
    }

    return EXIT_SUCCESS;
}