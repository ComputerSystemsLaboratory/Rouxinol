#include <bits/stdc++.h>
using namespace std;

const int INF = 1<<30;
int V, E, R;

typedef struct{
    int to, d;
}Edge;

vector<int> dijkstra(vector<vector<Edge>> &G, int s){
    vector<int> d(V, INF);
    
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> que;
    d[s] = 0;
    que.push({d[s], s});
    
    while(!que.empty()){
        auto p = que.top(); que.pop();
        if(d[p.second] < p.first)
            continue;
        
        for(auto edge: G[p.second]){
            if(d[edge.to] > d[p.second] + edge.d){
                d[edge.to] = d[p.second] + edge.d;
                que.push({d[edge.to], edge.to});
            }
        }
    }
    return d;
}

int main(){
    cin >> V >> E >> R;
    vector<vector<Edge>> G(V);
    for(int i=0; i<E; i++){
        int s, t, d;
        cin >> s >> t >> d;
        G[s].push_back({t, d});
    }
    
    vector<int> vec = dijkstra(G, R);
    for(auto v: vec){
        if(v == INF)
            cout << "INF" << endl;
        else
            cout << v << endl;
    }
    
    return 0;
}