#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ll INF = 1e18;
    int v, e;
    cin >> v >> e;
    vector<vector<ll>> dp(v, vector<ll>(v, INF));
    for(int i = 0; i < v; i++) dp[i][i] = 0;

    for(int i = 0; i < e; i++){
        int s, t, d;
        cin >> s >> t >> d;
        dp[s][t] = d;
    }

    for(int k = 0; k < v; k++){
        for(int i = 0; i < v; i++){
            for(int j = 0; j < v; j++){
                dp[i][j] = min(dp[i][j], dp[i][k] + dp[k][j]);
            }
        }
    }

    for(int i = 0; i < v; i++){
        if(dp[i][i] < 0){
            cout << "NEGATIVE CYCLE" << endl;
            return 0;
        }
    }

    for(int i = 0; i < v; i++){
        for(int j = 0; j < v; j++){
            if(j) cout << ' ';
            if(dp[i][j] < 1e12) cout << dp[i][j];
            else cout << "INF";
        }
        cout << endl;
    }
}
