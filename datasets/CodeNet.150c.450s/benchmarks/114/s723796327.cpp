#include <iostream>
#include <queue>
#include <vector>
using namespace std;

const int MAX_V = 100010;
struct edge{ int cost, to; };


int V;
vector<edge> G[MAX_V];
bool used[MAX_V];

auto compare = [](edge a, edge b){
    return a.cost > b.cost;
};

int res = 0;
int prim_pq(int s){
    for(int i = 0; i < V; i++) used[i] = false;
    used[s] = true;
    
    priority_queue<edge,vector<edge>,decltype(compare)> pq{compare};
    for(int i = 0; i < G[s].size(); i++) pq.push(G[s][i]);
    
    while(!pq.empty()){
        edge e = pq.top(); pq.pop();
        if(used[e.to]) continue;
        used[e.to] = true;
        res += e.cost;
        for(int i = 0; i < G[e.to].size(); i++) pq.push(G[e.to][i]);
    }
    return res;
}

int main(){
    cin >> V;
    for(int i = 0; i < V; i++){
        for(int j = 0; j < V; j++){
            int x; cin >> x;
            if(x == -1) continue;
            edge e;
            e.to = j; e.cost = x;
            G[i].push_back(e);
        }
    }
    cout << prim_pq(0) << endl;
    return 0;
}
