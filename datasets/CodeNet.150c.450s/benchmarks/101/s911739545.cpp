//グラフは隣接リスト表現で扱う。
//メモリ量O(E), 計算量O(V+E) (Vは頂点, Eは辺の数)
//辺が少ない疎なグラフで有利。

#include <bits/stdc++.h>
using namespace std;

#define MAX 105000
#define NIL -1

int n;
vector<int> G[MAX];
int color[MAX];

void dfs(int r, int c){
    stack<int> S;
    S.push(r);
    color[r] = c;

    while(!(S.empty())){
        int u = S.top(); S.pop();
        for(int i=0; i<G[u].size(); i++){
            int v = G[u][i];
            if(color[v] == NIL){
                color[v] = c;
                S.push(v);
            }
        }
    }
}

void bfs(int r, int c){
    //最初だけ別にpushしてやる
    queue<int> Q;
    Q.push(r);
    color[r] = c;

    while(!(Q.empty())){
        int u = Q.front(); Q.pop();
        for(int i=0; i<G[u].size(); i++){
            int v = G[u][i];
            if(color[v] == NIL){
                color[v] = c;
                Q.push(v);
            }
        }
    }
}

void assignColor(){
    int id = 1;
    for(int i=0; i<n; i++) color[i] = NIL;
    for(int u=0; u<n; u++){
        //if(color[u] == NIL) dfs(u, id++);
        if(color[u] == NIL) bfs(u, id++);
    }
}

int main(){
    int s, t, m, q;
    cin >> n >> m;

    //隣接リスト表現
    for(int i=0; i<m; i++){
        cin >> s >> t;
        G[s].push_back(t);
        G[t].push_back(s);
    }

    assignColor();

    cin >> q;
    
    for(int i=0; i<q; i++){
        cin >> s >> t;
        if(color[s] == color[t]){
            cout << "yes" << endl;
        }else{
            cout << "no" << endl;
        }
    }
    return 0;
}
