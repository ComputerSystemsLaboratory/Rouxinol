#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef float fl;
typedef long long ll;

static const int MAX = 100000;
static const int NIL = -1;

int n;
vector<int> G[MAX];
int color[MAX];

void dfs(int r, int c){
    stack<int> s;
    s.push(r);
    color[r] = c;

    while( !s.empty() ) {
       int u = s.top(); s.pop();
       rep(i,G[u].size()){
           int v = G[u][i];
           if( color[v] == NIL ){
                color[v] = c;
                s.push(v);
           }
       }
    }
}

void assignColor() {
    int id = 1;
    rep(i,n) color[i] = NIL;
    rep(i,n){
        if( color[i] == NIL ) dfs(i,id++);
    }
}

int main(){
    int s,t,m,q; 
    cin >> n >> m;
    rep(i,m){
        cin >> s >> t;
        G[s].push_back(t);
        G[t].push_back(s);
    }

    assignColor();

    cin >> q;
    rep(i,q){
        cin >> s >> t;
        if( color[s] == color[t] ){
            cout << "yes" << endl;
        }else{
            cout << "no" << endl;
        }
    }
    return 0;
}
