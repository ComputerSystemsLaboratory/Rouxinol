#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> P;
const int INF = 1e9;
const int MAX_V = 100000;

struct edge{
   int to, cost;
};

vector<edge> G[MAX_V];
bool used[MAX_V];
int n, m;

int prim(){
    int res = 0;
    priority_queue<P, vector<P>, greater<P> > q;
    memset(used, false, sizeof(used));
    q.push(P(0, 0));
    while(!q.empty()){
        P p = q.top(); q.pop();
        int v = p.second;
        int d = p.first;
        if(used[v]) continue;
        used[v] = true;
        res += d;
        for(int i = 0; i < G[v].size(); i++){
            q.push(P(G[v][i].cost, G[v][i].to));
        }
    }
    return res;
}

int main(){
    cin >> n >> m;
    for(int i = 0; i < m; i++){
        int s, t, w;
        cin >> s >> t >> w;
        //s--; t--;
        G[s].push_back({t, w});
        G[t].push_back({s, w});
    }
    cout << prim() << endl;
}

/* verified
https://onlinejudge.u-aizu.ac.jp/#/courses/library/5/GRL/2/GRL_2_A
*/
