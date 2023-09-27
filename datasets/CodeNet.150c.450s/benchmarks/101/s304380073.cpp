#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)

#define N 100000
#define NIL -1

int n, m;
vector<int> G[N];
int color[N];

queue<int> Q;

void bfs(int x, int c){
    if(color[x] != NIL) return;
    Q.push(x);
    color[x] = c;

    while(!Q.empty()){
        int u = Q.front(); Q.pop();
        for(int i = 0; i < G[u].size(); i++){
                int v = G[u][i];
                if(color[v] == NIL)
                Q.push(v);
                color[v] = c;
        }
    }
}

void assignColor(){
    for(int i = 0; i < n; i++) color[i] = NIL;
    int id = 1;
    for(int i = 0; i < n; i++) bfs(i,id++);
}


int main(){
    cin >> n >> m;

    rep(i,m){
        int a, b;
        cin >> a >> b;
        G[a].push_back(b);
        G[b].push_back(a);
    }

    assignColor();

    int q;
    cin >> q;
    rep(i,q){
        int x, y;
        cin >> x >> y;
        if(color[x] == color[y]) cout << "yes" << endl;
        else cout << "no" << endl;
    }

    return 0;

}
