#include<iostream>
#include<vector>
#include<stack>
using namespace std;

const int N = 100000;
const int NIL = -1;

int n;
vector<int> G[N];
int color[N];

void dfs(int r, int c){
    stack<int> S;
    S.push(r);
    color[r] = c;

    while(!S.empty()){
        int x = S.top(); S.pop();
        for(int i = 0; i < G[x].size(); i++){
            int v = G[x][i];
            if(color[v] == NIL){
                color[v] = c;
                S.push(v);
            }
        }
    }
}

void solve(){
    int id = 1;
    for(int i = 0; i < n; i++)  color[i] = NIL;
    for(int u = 0; u < n; u++){
        if(color[u] == NIL) dfs(u, id++);
    }
}

int main(){
    int q, s, t;
    cin >> n >> q;

    while(q-- > 0){
        cin >> s >> t;
        G[s].push_back(t);
        G[t].push_back(s);
    }

    solve();

    cin >> q;
    while(q-- > 0){
        cin >> s >> t;
        if(color[s] == color[t])    cout << "yes" << endl;
        else                        cout << "no" << endl;
    }

    return 0;
}
