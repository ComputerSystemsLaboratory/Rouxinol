#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

struct edge {int to, cost;};

int main(void){
    int n;
    cin >> n;
    vector<edge> d[n];
    rep(i, n){
        int u, k;
        cin >> u >> k;
        rep(j, k){
            int v, c;
            cin >> v >> c;
            d[u].push_back({v, c});
        }
    }
    vector<int> v(n);
    fill(v.begin(), v.end(), INT_MAX);
    priority_queue<P,vector<P>, greater<P>> q;
    q.push({0, 0});
    while(!q.empty()){
        P p = q.top(); q.pop();
        int g = p.second;
        if(v[g] < p.first) continue;
        v[g] = p.first;
        for(auto x : d[g]){
            if(v[x.to] > v[g] + x.cost)
                q.push({v[g] + x.cost, x.to});
        }
    }
    rep(i, n) cout << i << ' ' << v[i] << endl;
    return 0;
}
