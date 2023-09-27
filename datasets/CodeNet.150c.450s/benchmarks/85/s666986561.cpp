#include<bits/stdc++.h>
using namespace std;
#define chmax(a,b) a=max(a,b)
#define chmin(a,b) a=min(a,b)
#define INF 100100100100100

int main(){

    long long n; cin >> n;
    vector<long long> r(n);
    vector<long long> c(n);
    for(long long i = 0; i < n; i++){
        cin >> r[i] >> c[i];
    }

    vector<vector<long long> > dp(n + 1, vector<long long> (n + 1, INF));
    for(int i = 0; i < n; i++) dp[i][i + 1] = 0;
    
    for(int k = 2; k <= n; k++){
        for(int i = 0; i < n; i++){
            for(int j = 1; j < k; j++){
                if(i + k <= n){
                    chmin(dp[i][i + k], dp[i][i + j] + dp[i + j][i + k] + r[i] * c[i + j - 1] * c[i + k - 1]);
                }
            }
        }
    }

    cout << dp[0][n] << endl;
    
    return 0;
}
