#include <bits/stdc++.h>

using namespace std;
#define INF 1e10

struct Edge{
    int from;
    int to;
    int cost;
};


bool bellmanFord(vector<long> &d,
                const vector<Edge> edges,
                const int &V,
                const int &E)
{
    bool is_negativeloop = false;
    for(int i = 0;i < V;i++){
        for(int j = 0;j < E;j++){
            Edge current_edge = edges[j];
            if( d[current_edge.from] != INF && d[current_edge.to] > d[current_edge.from] + current_edge.cost){
                d[current_edge.to] = d[current_edge.from] + current_edge.cost;
                if(i == V-1) is_negativeloop = true;
            }
        }
    }
    return is_negativeloop;
}

int main()
{
    // ----- Input ----- //
    int V,E,r;
    int s,t;

    cin >> V >> E >> r;
    Edge temp;
    vector<Edge> edges; 
    vector<long> d(V,INF);
    
    for(int i = 0;i < E;i++){
        cin >> temp.from >> temp.to >> temp.cost;
        edges.push_back(temp);
    }
    d[r] = 0;

    bool is_negative_loop = bellmanFord(d,edges,V,E);
    if(is_negative_loop) cout << "NEGATIVE CYCLE" << endl;
    else{
        for(int i = 0;i < V;i++){
            if(d[i] == INF) cout << "INF" <<endl; 
            else cout << d[i] <<endl;
        }
    }

    return 0;
}


