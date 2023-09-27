#include <bits/stdc++.h>
using namespace std;

using ll = long long int;
using P = pair<int,int>;
constexpr int INF = 1<<30;

int n;
vector<vector<P> > g;
vector<int> d;

void dijkstra(int s){
    fill(d.begin(), d.end(), INF);
    d[s] = 0;
    priority_queue<P, vector<P>, greater<P> > que;
    que.push(make_pair(d[s],s));

    while(!que.empty()){
        P p = que.top();
        que.pop();
        int v = p.second;
        if(d[v] < p.first) continue;
        int k = int(g[v].size());
        for(int i=0;i<k;i++){
            int u = g[v][i].first, c = g[v][i].second;
            if(d[u] > d[v] + c){
                d[u] = d[v] + c;
                que.push(make_pair(d[u], u));
            }
        }
    }
}

int main(){
    cin >> n;
    g.resize(n);
    d.resize(n);
    for(int i=0;i<n;i++){
        int v, k;
        cin >> v >> k;
        for(int j=0;j<k;j++){
            int u, c;
            cin >> u >> c;
            g[v].push_back(make_pair(u,c));
        }
    }
    dijkstra(0);
    for(int i=0;i<n;i++){
        cout << i << " " << d[i] << endl;
    }
    return 0;
}

