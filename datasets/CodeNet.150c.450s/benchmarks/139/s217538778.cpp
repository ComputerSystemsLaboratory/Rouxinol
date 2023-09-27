#include <bits/stdc++.h>
 
using namespace std;
using ll = long long;
ll mod = 1e9 + 7;

vector<vector<ll>> adj(200001);  
ll s; 

queue<ll> q;
vector<bool> used(200001);
vector<ll> d(200001), p(200001);


void bfs(ll s){
    q.push(s);
    used[s] = true;
    p[s] = -1;
    while (!q.empty()) {
        ll v = q.front();
        q.pop();
        for (ll u : adj[v]) {
            if (!used[u]) {
                used[u] = true;
                q.push(u);
                d[u] = d[v] + 1;
                p[u] = v;
            }
        }
    }
}

int main(){
    ll n, m; cin >> n >> m;
    for(ll i = 0; i < m; ++i){
        ll a, b; cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    bfs(1);
    for(ll i = 2; i <= n; ++i){
        if(d[i] == 0){
            cout << "No";
            return 0;
        }
    }
    cout << "Yes" << endl;
    for(ll i = 2; i <= n; ++i){
        cout << p[i] << endl;
    }
    return 0;
}
