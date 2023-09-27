#include <bits/stdc++.h>
#define rep(i,a) for(i=0;i<a;i++)
using namespace std;
static const int W = 0;
static const int G = 1;
static const int B = 2;

void prim(int n, int &total,vector<vector<int> > &M) {
    int i,u,min;
    vector<int> d(n);
    vector<int> p(n);
    vector<int> color(n);

    rep(i,n){
        d[i] = INT_MAX;
        p[i] = -1;
        color[i] = W;
    }
    d[0] = 0;
    while(true){
        min = INT_MAX;
        u = -1;
        rep(i,n){
            if(min > d[i] && color[i] != B) {
                u = i;
                min = d[i];
            }
        }
        if(u==-1) break;
        color[u] = B;
        rep(i,n){
            if(color[i] != B && M[u][i] != INT_MAX){
                if(d[i] > M[u][i]) {
                    d[i] = M[u][i];
                    p[i] = u;
                    color[i] = G;
                }
            }
        }
    }
    rep(i,n){
        if(p[i] != -1) total += M[i][p[i]];
    }
}

int main(void) {
    int i,j,n,total = 0;
    vector<vector<int> > M;
    cin >> n;
    M.resize(n);

    rep(i,n){
        M[i].resize(n);
    }
    rep(i,n){
        rep(j,n){
            cin >> M[i][j];
            if(M[i][j] == -1) M[i][j] = INT_MAX;
        }
    }
    prim(n,total,M);
    cout << total << endl;
    return 0;
}