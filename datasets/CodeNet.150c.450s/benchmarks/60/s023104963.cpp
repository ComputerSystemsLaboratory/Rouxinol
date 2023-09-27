#include <iostream>
#include <vector>
using namespace std;

int main(void){cin.tie(0);ios::sync_with_stdio(false);

    int nb_nodes; cin >> nb_nodes;
    vector<vector<int>> graph( nb_nodes, vector<int>(nb_nodes, 0));
    
    int node;
    while (cin>>node){
        int nb_edges; cin >>nb_edges;
        int edge;
        for (int i=0; i<nb_edges; ++i){
            cin >> edge;    
            graph[node-1][edge-1] = 1;
        }
    }
    
    for(auto& a:graph){
        for(auto&& b:a) cout<<b<<(&b!=&a.back()? " ":"\n");
    }
}