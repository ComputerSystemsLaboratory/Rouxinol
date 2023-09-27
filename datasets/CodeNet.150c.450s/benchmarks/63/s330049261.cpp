#include <bits/stdc++.h>
#define rep(i, a, n) for(int i = a; i < n; i++)
#define int long long
using namespace std;
typedef pair<int, int> P;
const int mod = 1000000007;
const int INF = 1e12;
const int MAX_V = 200010;

struct edge{
   int to, cost;
   edge(int to, int cost):to(to), cost(cost){}
};

vector<edge> G[MAX_V];

struct Dijkstra{
    vector<int> d, dp;
    Dijkstra(){}
    Dijkstra(int V){
        d.resize(V, INF);
        dp.resize(V, 0);
    }
    void calc(int s){
        d[s] = 0;
        dp[s] = 1;
        priority_queue<P, vector<P>, greater<P> > q;
        q.push(P(d[s], s));
        while(!q.empty()){
            P p = q.top(); q.pop();
            int from = p.second;
            int cost = p.first;
            if(d[from] < cost) continue;
            rep(i, 0, G[from].size()){
                int next = G[from][i].to;
                int newCost = cost + G[from][i].cost;
                if(d[next] > newCost){
                    d[next] = newCost;
                    dp[next] = dp[from];
                    q.push(P(newCost, next));
                }else if(d[next] == newCost){
                    dp[next] = (dp[next] + dp[from]) % mod;
                }
            }
        }
    }
};

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, m, s;
    cin >> n >> m >> s;
    rep(i, 0, m){
        int s, t, d;
        cin >> s >> t >> d;
        G[s].push_back({t, d});
    }
    Dijkstra dstr(n);
    dstr.calc(s);
    rep(i, 0, n){
        int tmp = dstr.d[i];
        if(tmp == INF) cout << "INF" << endl;
        else cout << tmp << endl;
    }
}
