#include <bits/stdc++.h>
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rrep(i, n) for (int i = 1; i < (n + 1); ++i)
using namespace std;
using ll = long long;
const int INF = +100100100;
// typedef pair<int,int> P;
const int NIL = -1;
const int MAX = 100000;
vector<vector<int>> G(MAX);
vector<int> color(MAX,NIL);
int n;

// start:r , color:c
void dfs(int r, int c){
    stack<int> S;
    S.push(r);
    color[r]=c;
    while(!S.empty()){
        int u = S.top();S.pop();
        rep(i,G[u].size()){
            int v = G[u][i];
            if(color[v]==NIL){
                color[v]=c;
                S.push(v);
            }
        }
    }
}

void assign_color(){
    int id = 1;
    rep(i,n){
        if(color[i]==NIL){
            dfs(i,id++);
        }
    }
}


int main(){
    int m;
    cin >> n >> m;
    rep(i,m){
        int v,u;
        cin >> v >> u;
        G[u].push_back(v);
        G[v].push_back(u);
    }
    int q;
    cin >> q;
    assign_color();
    rep(i,q){
        int u,v;
        cin >> u>>v;
        if(color[u]==color[v])cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }
    return 0;

}
