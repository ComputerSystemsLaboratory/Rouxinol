#include <iostream>
#include <vector>
#include <stack>
using namespace std;

const int Max = 100000;
const int NIL = -1;

int n;
vector<int> G[Max];
int color[Max];

void dfs(int r, int c){
    stack<int> S;
    S.push(r);
    color[r] = c;
    while(!S.empty()){
        int u = S.top();
        S.pop();
        for(int i=0; i<G[u].size(); i++){
            int v = G[u][i];
            if(color[v] == NIL){
                S.push(v);
                color[v] = c;
                // cout << color[v] << endl;
            }
        }
    }
}
void assignColor(){
    int id = 1;
    for(int i=0; i<n; i++){ color[i] = NIL; }
    for(int u=0; u<n; u++){
        if(color[u] == NIL) dfs(u, id++);
    }
}

int main(){
    int m, u, v, q;
    cin >> n >> m;
    for(int i=0; i<m; i++){
        cin >> u >> v;
        G[u].push_back(v);
        G[v].push_back(u);
    }

    assignColor();
    
    cin >> q;
    for(int i=0; i<q; i++){
        cin >> u >> v;
        // cout << color[u] << color[v] << endl;
        if(color[u] == color[v]) cout << "yes\n";
        else cout << "no\n";
    }

    return 0;
}
