#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

int M[200][200];
string color[200];
int d[200];
int p[200];
int n;
const int INF = 1001001001;

void prim(){
    rep(i, n){
        d[i] = INF;
        color[i] = "WHITE";
    }
    d[0] = 0;
    p[0] = -1;

    int u;

    while(true){
        int mincost = INF;
        for (int i = 0; i < n; i++){
            if(color[i] != "BLACK" && d[i] < mincost){
                mincost = d[i];
                u = i;
            }
        }
        if(mincost == INF){
            break;
        }
        color[u] = "BLACK";

        for (int i = 0; i < n; i++){
            if(color[i] != "BLACK" && M[u][i] != -1){
                if(M[u][i] < d[i]){
                    d[i] = M[u][i];
                    p[i] = u;
                    color[i] = "GRAY";
                }
            }
        }
    }
}

int main() {
    cin >> n;
    rep(i, n){
        rep(j, n){
            cin >> M[i][j];
        }
    }
    prim();
    int ans = 0;
    rep(i, n){
        if(d[i] != INF){
            ans += d[i];
        }
    }
    cout << ans << endl;

    return 0;
}
