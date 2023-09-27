#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> P;
const int INF = 1e9;

struct edge{
    int to, cost;
};

int V, E, r;
vector<edge> G[100010];
int d[100010];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> V >> E >> r;
    for(int i = 0; i < E; i++){
        int a, b, c;
        cin >> a >> b >> c;
        G[a].push_back(edge{b, c});
    }
    fill(d, d + V, INF);
    d[r] = 0;
    priority_queue<P, vector<P>, greater<P> > q;
    q.push(P(d[r], r));
    while(!q.empty()){
        P p = q.top(); q.pop();
        int from = p.second;
        int cost = p.first;
        if(d[from] < cost) continue;
        for(int i = 0; i < G[from].size(); i++){
            edge e = G[from][i];
            int next = e.to;
            int newCost = e.cost + cost;
            if(d[next] > newCost){
                d[next] = newCost;
                q.push(P(newCost, next));
            }
        }
    }
    for(int i = 0; i < V; i++){
        if(d[i] >= INF) cout << "INF" << endl;
        else cout << d[i] << endl;
    }
}