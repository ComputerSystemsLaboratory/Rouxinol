#include <bits/stdc++.h>
using namespace std;

const int INF = 1<<30;

typedef struct{
    int s, t, d;
}Edge;

int V, E, R;

bool bellman_ford(vector<Edge> &edges, int s, vector<int> &d){
    d[s] = 0;
    
    bool updated = true;
    for(int i=0; i<V; i++){
        updated = false;
        for(auto edge: edges){
            if(d[edge.s] != INF && d[edge.t] > d[edge.s] + edge.d){
               d[edge.t] = d[edge.s] + edge.d;
                updated = true;
            }
        }
    }
    return updated;
}

int main(){
    cin >> V >> E >> R;
    vector<Edge> edges;
    for(int i=0; i<E; i++){
        int s, t, d;
        cin >> s >> t >> d;
        edges.push_back({s, t, d});
    }
    
    vector<int> d(V, INF);
    bool neg_loop = bellman_ford(edges, R, d);
    
    if(neg_loop){
        cout << "NEGATIVE CYCLE" << endl;
    }else{
        for(auto v: d){
            if(v == INF)
                cout << "INF" << endl;
            else
                cout << v << endl;
        }
    }
    
    return 0;
}