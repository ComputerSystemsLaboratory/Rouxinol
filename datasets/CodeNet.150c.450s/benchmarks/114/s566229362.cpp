#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef float fl;
typedef long long ll;

static const int MAX = 100;
static const int INF = (1<<21);
static const int WHITE = 0;
static const int GRAY = 1;
static const int BLACK = 2;

int n, M[MAX][MAX];

int prim() {
    int u, minv;
    int d[MAX], p[MAX], color[MAX];

    rep(i,n) {
        d[i] = INF;
        p[i] = -1;
        color[i] = WHITE;
    }
    d[0] = 0;

    while(1){
        minv = INF;
        u = -1;
        rep(i,n) {
            if( minv > d[i] && color[i] != BLACK) {
                u = i;
                minv = d[i];
            }
        }
        if (u == -1) break;
        color[u] = BLACK;
        rep(v,n) {
            if (color[v] != BLACK && M[u][v] != INF) {
                if ( d[v] > M[u][v]){
                    d[v] = M[u][v];
                    p[v] = u;
                    color[v] = GRAY;
                }
            }
        }
    }
    int sum = 0;
    rep(i,n) {
        if (p[i] != -1) sum += M[i][p[i]];
    }
    return sum;
}

int main(){
    cin >> n;
    rep(i,n){
        rep(j,n){
            int e; cin >> e;
            M[i][j] = (e == -1)? INF : e;
        }
    } 
    cout << prim() << endl;
    return 0;
}
