#include <bits/stdc++.h>

#define REP(i, s, n) for (int i = s; i < n; i++)
#define rep(i, n) REP(i, 0, n)

using namespace std;

// graph
// adjacent list
vector<vector<int>> G; 
// adjacent matrix
const int MAX_N = 100;
int GM[MAX_N][MAX_N];

int main(){
    // input 
    int n; cin >> n;
    G.resize(n);
    rep(i, n){
        int from, edgeNum, to;
        cin >> from >> edgeNum;
        G[from-1].resize(edgeNum);
        rep(j, edgeNum){
            cin >> G[from-1][j];
        }
    }

    // output adjacent matrix
    rep(u, n){
        rep(i, G[u].size()){
            GM[u][G[u][i]-1] = 1; 
        }
    }
    rep(i, n)
        rep(j, n)
            cout << GM[i][j] << (j<n-1? " ": "\n");
}
