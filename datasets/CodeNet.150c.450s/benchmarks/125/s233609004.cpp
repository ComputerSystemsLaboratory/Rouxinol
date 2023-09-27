#include <iostream>
#define MAX 100
#define WHITE 0
#define GRAY 1
#define BLACK 2

using namespace std;

int n, t = 0;
int color[MAX+1];
int m[MAX+1][MAX+1];
int d[MAX+1], f[MAX+1];

void visit(int u){
    int v;
    color[u] = GRAY;
    d[u] = ++t;
    for(v = 1; v <= n; v++){
        if(m[u][v] == 0) continue;
        if(color[v] == WHITE) visit(v);
    }
    color[u] = BLACK;
    f[u] = ++t;
}

void dfs(){
    int u, i;
    for(u = 1; u <= n; u++) color[u] = WHITE;
    for(u = 1; u <= n; u++){
        if(color[u] == WHITE) visit(u);
    }
}

int main(){
    int k, u, v, i, j;
    
    cin >> n;

    for(i = 1; i <= n; i++){
        for(j = 1; j <= n; j++) m[i][j] = 0;
    }

    for(i = 1; i <= n; i++){
        cin >> u >> k;
        for(j = 1; j <= k; j++){
            cin >> v;
            m[u][v] = 1;
        }
    }

    dfs();
    
    for(i = 1; i <= n; i++) cout << i << " " << d[i] << " " << f[i] << endl;
    
    return 0;
}
