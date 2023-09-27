#include <iostream>
using namespace std;
#include <stack>
#include <string>

const int Max = 100;
const int white = 0;
const int gray = 1;
const int black = 2;

int n, M[Max][Max];
int color[Max], d[Max], f[Max], tt;
int nt[Max];

int next(int u){
    for(int v = nt[u]; v<n; v++){
        nt[u] = v+1;
        if(M[u][v]) return v;
    }
    return -1;
}
void dfs_visit(int r){
    for(int i=0; i<n; i++) nt[i] = 0;

    stack<int> S;
    S.push(r);
    color[r] = gray;
    d[r] = ++tt;

    while( !S.empty() ){
        int u = S.top();
        int v = next(u);
        if( v != -1){
            if(color[v] == white){
                color[v] = gray;
                d[v] = ++tt;
                S.push(v);
            }
        } else {
            S.pop();
            color[u] = black;
            f[u] = ++tt;
        }
    }
}
void dfs(){
    for(int i=0; i<n; i++){
        color[i] = white;
        nt[i] = 0;
    }
    tt = 0;

    for(int u=00; u<n; u++){
        if( color[u] == white) dfs_visit(u);
    }
    for(int i=0; i<n; i++){
        cout << i+1 << " " << d[i] << " " << f[i] << endl;
    }
}

int main(){
    int u, k, v;

    cin >> n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++) M[i][j] = 0;
    }

    for(int i=0; i<n; i++){
        cin >> u >> k;
        u--;
        for(int j=0; j<k; j++){
            cin >> v;
            v--;
            M[u][v] = 1;
        }
    }

    dfs();

    return 0;

}
