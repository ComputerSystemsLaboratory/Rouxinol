#include <iostream>
#include <vector>

using namespace std;
int main(){
    //freopen("in", "r", stdin);

    int v,e;
    cin >> v >> e;
    const long INF = (1L << 32);
    vector<vector<long>> dp(v,vector<long>(v,INF));
    for (int i = 0; i < v; ++i)for (int j = 0; j < v; ++j) dp[i][j] = ((i == j) ? 0:INF);
    for (int i = 0; i < e; ++i) {
        int s,t,cost;
        cin >> s >> t >> cost;
        dp[s][t] = cost;
    }

    for (int k = 0; k < v; ++k) {
        for (int i = 0; i < v; ++i) {
            if (dp[i][k] == INF) continue;
            for (int j = 0; j < v; ++j) {
                if (dp[k][j] == INF) continue;
                dp[i][j] = min(dp[i][j],dp[i][k] + dp[k][j]);
            }
        }
    }

    for (int i = 0; i < v; ++i) if (dp[i][i] < 0) { cout << "NEGATIVE CYCLE" << endl;return 0;}
    for (int i = 0; i < v; ++i){
        for (int j = 0; j < v; ++j) {
            if(j)cout << " ";
            if (dp[i][j] == INF)
                cout << "INF";
            else
                cout << dp[i][j];
        }
        cout << endl;
    }

    return 0;
}