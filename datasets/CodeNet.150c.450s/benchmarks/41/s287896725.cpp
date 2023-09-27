#include <bits/stdc++.h>
using namespace std;
#define int long long

// long long ll_min(long long n, long long m){
//     if(n < m) return n;
//     else return m;
// }

signed main(){
    // cout << fixed << setprecision(10) << flush;

    int V, E;
    cin >> V >> E;
    int INF = 1<<28;
    vector<vector<int>> edges(V, vector<int>(V, INF));
    for(int i=0; i<E; i++){
        int s, t, d;
        cin >> s >> t >> d;
        edges[s][t] = d;
    }


    // Warshall-Floyd
    // dp[i][j] はそこまで見た中での i->j の最短距離
    vector<vector<int>> dp = edges;
    for(int i=0; i<V; i++){
        dp[i][i] = 0;
    }
    for(int k=0; k<V; k++){
        for(int i=0; i<V; i++){
            for(int j=0; j<V; j++){
                // dp[i][j] = min(dp[i][j], dp[i][k] + dp[k][j]);
                // 負の辺があると INF が減算されてしまって非常に怪しい
                if(dp[i][k] == INF || dp[k][j] == INF){
                    // 更新なし
                    continue;
                }
                else if(dp[i][j] == INF){
                    dp[i][j] = dp[i][k] + dp[k][j];
                }
                else{
                    dp[i][j] = min(dp[i][j], dp[i][k] + dp[k][j]);
                }
            }
        }
    }

    // NEGATIVE CYCLE の判定
    for(int i=0; i<V; i++){
        for(int j=0; j<V; j++){
            if(dp[i][i] < 0){
                cout << "NEGATIVE CYCLE" << endl;
                return 0;
            }
        }
    }

    for(int i=0; i<V; i++){
        for(int j=0; j<V-1; j++){
            if(dp[i][j] == INF) cout << "INF ";
            else cout << dp[i][j] << " "; 
        }
        if(dp[i][V-1] == INF) cout << "INF" << endl;
        else cout << dp[i][V-1] << endl; 
    }


    return 0;
}
