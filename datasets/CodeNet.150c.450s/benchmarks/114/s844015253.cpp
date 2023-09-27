#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)

static const int MAX = 100;
static const int INFTY = (1 << 21);
static const int WHITE = 0;
static const int GRAY = 1;
static const int BLACK = 2;

int n, M[MAX][MAX];

int prim(){
    int u, minv;
    int d[MAX], p[MAX], color[MAX];

    for(int i = 0; i < n; i++){
        d[i] = INFTY;
        p[i] = -1;
        color[i] = WHITE;
    }

    d[0] = 0;

    while(1){
        u = -1;
        minv = INFTY;

        //到達可能で最も近いものを探索
        for(int i = 0; i < n; i++){
            if(color[i] != BLACK && d[i] < minv){
                u = i;
                minv = d[i];
            }
        }
        
        //全て到達したらbreak
        if(u == -1) break;

        //1接点を確定
        color[u] = BLACK;

        //到達可能な接点との距離を更新
        for(int v = 0; v < n; v++){
            if(color[v] != BLACK && M[u][v] != INFTY){
                if(M[u][v] < d[v]){
                    d[v] = M[u][v];
                    color[v] = GRAY; //この行はなくても機能しそう
                    p[v] = u;
                }
            }
        }

    }
    //MSTのコストを計算
    int sum = 0; 
    for(int v = 0; v < n; v++){
        if(p[v] != -1) sum += M[p[v]][v];
    }
    return sum;
}

int main(){
    cin >> n;

    rep(i,n)rep(j,n){
        int e;
        cin >> e;
        M[i][j] = (e == -1) ? INFTY : e;
    }

    cout << prim() << endl;
    
    return 0;
}
