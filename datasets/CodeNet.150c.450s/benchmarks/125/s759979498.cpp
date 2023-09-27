#include <bits/stdc++.h>
#include <string>
#include <vector>
#define rep(i,n) for (int i = 0;i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

//AOJ Depth First Search
//http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_11_B&lang=ja
using Graph = vector<vector<int>>;
vector<bool> seen;
vector<int> first_order;
vector<int> last_order;

void dfs(const Graph &G,int v,int& first_ptr){
    seen[v] = true;

    first_order[v] = first_ptr++;
    for(auto next_v: G[v]){
        if(seen[next_v]) continue;
        dfs(G,next_v,first_ptr);
    }
    last_order[v] = first_ptr++;
}
int main() {
    int v;
    cin >> v ;
    Graph G(v);

    rep(i,v){
        int u,k;
        cin >> u >> k;
        rep(j,k){
            int vi;
            cin >> vi;
            G[u-1].push_back(vi-1);
        }
    }

    seen.assign(v,false);
    first_order.resize(v);
    last_order.resize(v);
    int first_ptr = 1;
    rep(vi,v){
        if(seen[vi])continue;
        dfs(G, vi, first_ptr);
    }
    rep(i,v){
        cout << i+1 << " " << first_order[i] << " " << last_order[i] << endl;
    }
}
