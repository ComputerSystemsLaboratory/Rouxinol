#include <bits/stdc++.h>

#define REP(i, n) for(int i=0;i<(int)(n);i++)
#define ALL(x) (x).begin(),(x).end()
const int INF = 1e9;

using namespace std;
int adj[105][105] = {0};
int res[105][2] = {0};
int t = 1;
int n;

int dfs(int start){
    if(res[start][0] == 0)
        res[start][0] = t;
    t++;
    REP(i, n)
        if(adj[start][i] != 0 && res[i][0] == 0)
            dfs(i);
    res[start][1] = t;
    t++;
    return 0;
}

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
    }
    REP(i, n)
        if(res[i][0] == 0)
            dfs(i);
    REP(i, n)
        cout << i+1 << " " << res[i][0] << " " << res[i][1] << endl;
    return 0;
}