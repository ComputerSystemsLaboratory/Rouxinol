#include <bits/stdc++.h>
#include <string>
#include <vector>
#include <queue>
#define rep(i,n) for (int i = 0;i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;


int main(){
    int n,m;
    cin >> n >> m;
    vector<int> a(n);
    vector<vector<int>> G;
    a.assign(n,0);
    G.assign(n,vector<int>());

    rep(i,m){
        int a,b;
        cin >> a >> b;
        --a;--b;
        G[a].push_back(b);
        G[b].push_back(a);
    }
    
    queue<int> q;
    q.push(0);
    while(q.size()){
        int v = q.front();
        q.pop();
        for(auto nextv : G[v]){
            if(a[nextv] != 0) continue;
            a[nextv] = v+1;
            q.push(nextv);
        }
    }
    cout << "Yes" << endl;
    for(int i = 1;i<=n-1;i++) cout << a[i] << endl;
}