#include <iostream>
using namespace std;

const int N = 100;
const int white = 0;
const int gray = 1;
const int black = 2;

int n,M[N][N];
int color[N],d[N],f[N],tt;

//?????°dfs
void dfs_visit(int u){
    int v;
    color [u] = gray;
    d[u] = ++tt; //??????????¨????
    for ( v = 0; v < n ; ++v) {
        if (M[u][v] == 0)continue;
        if (color[v] == white){
            dfs_visit(v);
        }
    }
    color[u] = black;
    f[u] = ++tt; //?¨?????????????
}

void dfs(){
    int u;
    for (u = 0; u < n; ++u) {
        color[u] = white;
    }
    tt = 0;

    for (int u = 0; u < n ; ++u) {
        //????¨???????u????§??????¨????????±???????????¢?´¢
        if(color[u] == white) dfs_visit(u);
    }
    for (int u = 0; u < n ; ++u) {
        cout << u+1 << " " << d[u] << " " << f[u] << endl;
    }
}

int main(){
    int u,v,k;
    M[N][N] = {0};
    cin >> n;
    for (int i = 0; i < n ; ++i) {
        cin >> u >> k;
        u --;
        for (int j = 0; j < k ; ++j) {
            cin >> v;
            v --;
            M[u][v] = 1;
        }
    }
    
    dfs();
    return 0;

}