#include <bits/stdc++.h>

#define REP(i, n) for(int i=0;i<(int)(n);i++)
#define ALL(x) (x).begin(),(x).end()
const int INF = 1e9;

using namespace std;
int adj[105][105] = {0};
int res[105] = {0};
int n;

int main() {
    cin >> n;
    REP(i, n){
        int u, k;
        cin >> u >> k;
        REP(j, k) {
            int tmp;
            cin >> tmp;
            adj[u-1][tmp-1] = 1;
        }
        res[i] = INF;
    }
    res[0] = 0;
    REP(k, 3) REP(i, n) REP(j, n)
        if(adj[i][j] != 0)
            res[j] = min(res[j], res[i]+1);

    REP(i, n){
        if(res[i] != INF)
            cout << i+1 << " " << res[i] << endl;
        else
            cout << i+1 << " -1" << endl;
    }
    return 0;
}