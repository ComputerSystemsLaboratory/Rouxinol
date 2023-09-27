#include <iostream>
#include <algorithm>
#define REP(i,n) for(int i=0;i<n;i++)
#define REP3D(i,s,g) for(int i=s;i>=g;i--)
using namespace std;

int main() {
    int N, W;
    cin >> N >> W;
    int dp[W+1], v[N], w[N];
    REP(i,W+1)
        dp[i] = 0;
    REP(i,N){
        cin >> v[i] >> w[i];
    }
    REP(i,N){
        REP3D(j,W,0){
            if (j-w[i] >= 0)
                dp[j] = max(dp[j],dp[j-w[i]]+v[i]);
        }
    }
    cout << dp[W] << '\n';

}