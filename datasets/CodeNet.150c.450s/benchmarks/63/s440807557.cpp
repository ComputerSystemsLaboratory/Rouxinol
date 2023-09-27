#include <bits/stdc++.h>
#define rep(i, a, n) for(int i = a; i < n; i++)
#define repb(i, a, b) for(int i = a; i >= b; i--)
#define all(a) a.begin(), a.end()
#define o(a) cout << a << endl
#define int long long
using namespace std;
typedef pair<int, int> P;


const int INF = 1e9;
int V, E, r;
int d[100010];

struct edge{
    int to, cost;
    edge(int to, int cost): to(to), cost(cost){}
};
vector<edge> G[100010];


// void dijkstra(int s){
//     memset(d, INF, sizeof(d));
//     d[s] = 0;
//     priority_queue<P, vector<P>, greater<P> > q;
//     q.push(P(0, s));
//     while(!q.empty()){
//         P p = q.top(); q.pop();
//         int now = p.second;
//         if(d[now] < p.first) continue;
//         rep(i, 0, G[now].size()){
//             int next = G[now][i].to;
//             if(d[now] + G[now][i].cost < d[next]){
//                 d[next] = d[now] + G[now][i].cost;
//                 q.push(P(d[next], next));
//             }
//         }
//     }
// }

void dijkstra(int s){
    priority_queue<P, vector<P>, greater<P> > q;//P
    fill(d, d + V, INF);//INF
    d[s] = 0;
    q.push(P(0, s));

    while(!q.empty()){
        P p = q.top(); q.pop();
        int v = p.second;
        if(d[v] < p.first) continue;
        rep(i, 0, G[v].size()){
            edge e = G[v][i];
            if(d[e.to] > d[v] + e.cost){
                d[e.to] = d[v] + e.cost;
                q.push(make_pair(d[e.to], e.to));
            }
        }
    }
}

signed main(){
    cin >> V >> E >> r;
    int s, t, a;
    rep(i, 0, E){
        cin >> s >> t >> a;
        G[s].push_back(edge(t, a));
    }
    dijkstra(r);
    rep(i, 0, V){
        if(d[i] == INF) cout << "INF"  << endl;
        else cout << d[i] << endl;
    }
}