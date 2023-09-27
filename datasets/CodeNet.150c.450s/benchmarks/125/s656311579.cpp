#include<iostream>
using namespace std;
#define MAX 100

int mat[MAX][MAX] = {};
int n, tt = 0, d[MAX] = {}, f[MAX] = {};
bool c[MAX];

void dfs_visit(int u){
    c[u] = true;
    d[u] = ++tt;
    for(int i = 0; i < n; i++){
        if(mat[u][i] == 0)  continue;
        if(!c[i])   dfs_visit(i);
    }
    f[u] = ++tt;
}

void dfs(){
    for(int i = 0; i < n; i++){
        if(!c[i])   dfs_visit(i);
    }

    for(int i = 0; i < n; i++){
        cout << (i+1) << " " << d[i] << " " << f[i] << endl;
    }
}

int main(){
    cin >> n;
    
    for(int i = 0; i < n; i++){
        int x, k, y;
        cin >> x >> k;
        while(k-- > 0){
            cin >> y;
            mat[x-1][y-1] = 1;
        }
    }

    dfs();
    return 0;
}
