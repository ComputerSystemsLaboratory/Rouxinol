#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>
using namespace std;

#define INF INT_MAX / 3
#define LINF LLONG_MAX / 3

/*
 * ???????????§????????????????????????
 */

int main(){
    int N,W; cin>>N>>W;
    vector<int> v(N),w(N);
    for(int i=0;i<N;i++) cin>>v[i]>>w[i];
    int sumv = 0;
    for(int i=0;i<N;i++) sumv += v[i];
    vector<vector<int>> dp(N+1,vector<int>(sumv+1,INF));

    dp[0][0] = 0;

    for(int i=0;i<N;i++){
        for(int j=0;j<=sumv;j++){
            if(j<v[i]){
                dp[i+1][j] = dp[i][j];
            }else{
                dp[i+1][j] = min(dp[i][j],dp[i][j-v[i]]+w[i]);
            }
        }
    }

    int ans = 0;
    for(int i=0;i<=sumv;i++) if(dp[N][i]<=W) ans = i;
    cout << ans << endl;
}