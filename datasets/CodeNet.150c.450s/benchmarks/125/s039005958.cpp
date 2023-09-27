#include<bits/stdc++.h>
using namespace std;
int visit[101], d[101], f[101], t;
int n, M[101][101];

static const int WHITE = 0;
static const int GRAY = 1;

void dfs(int u){
    visit[u] = GRAY;
    d[u] = ++t;
    for( int v = 0; v < n; ++v ){
        if(M[u][v] == 0) continue;
        if(visit[v]==WHITE)
            dfs(v);
    }
    f[u] = ++t;
}

int main(){
    int u, v, k;
    cin >> n;
    for( int i = 0; i < n; ++i ){
        scanf("%d %d",&u,&k);
        u--;
        for( int j = 0; j < k; ++j ){
            scanf("%d",&v);
            v--;
            M[u][v] = 1;
        }
    }
    for( int i = 0; i < n; ++i ){
        if(visit[i]==WHITE)
            dfs(i);
    }
    for( int i = 0; i < n; ++i ){
        cout << i+1 <<" "<< d[i] <<" "<< f[i] << endl;
    }
    return 0;
}


