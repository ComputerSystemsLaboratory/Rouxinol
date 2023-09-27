#include <iostream>
#include <bits/stdc++.h>

using namespace std;

#define ll long long

const ll mod  = 1e9 + 7;
const ll INF = 1e14;


void solve(){

    int n, m; cin >> n >> m;
    vector<int> graph[n+1];
    while(m--){
        int u, v; cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    vector<int> par (n+1, -1);

    queue<int> que;
    for(int it : graph[1]){
        que.push(it);
        par[it] = 1;
    }
    while(!que.empty()){
        int node = que.front();
        que.pop();
        for(int it : graph[node]){
            if(par[it] != -1) continue;
            que.push(it);
            par[it] = node;
        }
    }
    for(int i = 2; i <= n; ++i){
        if(par[i] == -1){
            cout << "No";
            return;
        }
    }
    cout << "Yes\n";
    for(int i = 2; i <= n; ++i) cout << par[i] << "\n";

}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    

    cout << setprecision(10);
    //int test; cin >> test;
    //for(int t = 1; t <= test; ++t){
        solve();    
    //}

	return 0;
}