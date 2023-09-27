#include <bits/stdc++.h>
#define rep(i,a) for(i=0;i<a;i++)
using namespace std;
static const int W = 0;
static const int B = 1;

void dijkstra(int n, vector<vector<int> > &M) {
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
        rep(i,n){
            if(min > d[i] && color[i] != B) {
                u = i;
                min = d[i];
            }
        }
        if(min == INT_MAX) break;
        color[u] = B;
        rep(i,n){
            if(color[i] != B && M[u][i] + d[u] < d[i]) {
                p[i] = u;
                d[i] = M[u][i] + d[u];
            }
        }
    }
    rep(i,n){
        cout << i << " " << d[i] << endl;
    }
}

int main(void) {
    int i,j,n,u,k,v;
    vector<vector<int> > M;
    cin >> n;
    M.resize(n);

    rep(i,n){
        M[i].resize(n);
    }
    rep(i,n){
        rep(j,n){
            M[i][j] = (1<<21);
        }
    }

    rep(i,n){
        cin >> u >> k;
        rep(j,k){
            cin >> v;
            cin >> M[u][v];
        }
    }
    dijkstra(n,M);
    return 0;
}