#include<bits/stdc++.h>
using namespace std;
int MOD = 1000000007;

struct edge {int to, cost; };
typedef pair<int, int> P;
int V;
vector <edge> G[100010];
int d[100010];

void dijkstrra(int s){
    priority_queue <P, vector<P>, greater<P> > que;
    fill(d, d + V, 1000000000);
    d[s] = 0;
    que.push(P(0 , s));
    
    while(!que.empty()){
        P p = que.top(); que.pop();
        int v = p.second;
        if(d[v] < p.first)  continue;
        for(int i = 0; i < G[v].size(); i++){
            edge e = G[v][i];
            if(d[e.to] > d[v] + e.cost){
                d[e.to] = d[v] + e.cost;
                que.push(P(d[e.to], e.to));
            }
        }
    }
}

int main(){
    cin >> V;
    int e, r;   cin >> e >> r;
    for(int i = 0; i < e; i++){
        int s, t, d;
        cin >> s >> t >> d;
        G[s].push_back({t, d});
    }
    dijkstrra(r);
    for(int i = 0; i < V; i++){
        if(d[i] == 1000000000)
            cout << "INF" << endl;
        else
            cout << d[i] << endl;
    }
    return 0;
}