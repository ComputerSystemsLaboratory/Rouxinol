#include<bits/stdc++.h>
using namespace std;
int MOD = 1000000007;

struct edge {int to, cost; };
using P = pair<int , int>;
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
    int n;
    cin >> n;
    V = n;
    for(int i = 0; i < n; i++){
        int u, k;
        cin >> u >> k;
        int v,c;
        for(int i = 0; i < k; i++){
            cin >> v >> c;
            G[u].push_back(edge{v, c});
        }
    }
    dijkstrra(0);
    for(int i = 0; i < n; i++)
        cout << i << " " << d[i] << endl;
    return 0;
}