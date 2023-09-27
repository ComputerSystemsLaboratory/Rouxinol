#include<bits/stdc++.h>
using namespace std;
#define rep(i,N) for(ll i=0;i<N;++i)
typedef long long int ll;
ll INF = 1LL<<60;

vector<vector<int> > G(100010);
vector<int> color(100010,-1);
int n,m; 

// sからたどり着く頂点の色をcに塗り替える
void dfs(int v, int c){
    stack<int> s;
    s.push(v);
    color[v] = c;
    while(!s.empty()){
        int u = s.top(); s.pop();
        for(auto nv : G[u]){
            if(color[nv] == -1){
                color[nv] = c;
                s.push(nv);
            }
        }
    }
}

void assignColor(){
    int number = 1;
    rep(i,n){
        if(color[i] == -1) dfs(i, number++);
    }
}

int main(){
        cin >> n >> m;
    rep(i,m){
        int x,y; cin >> x >> y;
        G[x].push_back(y);
        G[y].push_back(x);
    }

    assignColor();
    int q; cin >> q;
    rep(i,q){
        int x,y; cin >> x >> y;
        if(color[x] == color[y]) cout << "yes" << endl;
        else cout << "no" << endl;
    }
}
