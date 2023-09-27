#include <bits/stdc++.h>
#define rep(i, a, n) for(int i = a; i < n; i++)
#define repb(i, a, b) for(int i = a; i >= b; i--)
#define all(a) a.begin(), a.end()
#define o(a) cout << a << endl
#define int long long
using namespace std;
typedef pair<int, int> P;

struct edge{
    int to, cost;
    edge(int to, int cost):to(to), cost(cost){}
};

const int INF = 1e12;
int d[100010];
int n, m, s;
vector<edge> G[100010];


void dijkstra(int s){
    priority_queue<P, vector<P>, greater<P> > q;//P
    fill(d, d + n, INF);//INF
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
    cin >> n >> m >> s;
    rep(i, 0, m){
        int a, b, c;
        cin >> a >> b >> c;
        G[a]. push_back(edge(b, c));
    }
    dijkstra(s);
    rep(i, 0, n){
        if(d[i] >= INF) cout << "INF" << endl;
        else cout << d[i] << endl;
    }
}