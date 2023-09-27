#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

/*
 * 0-1????????????????????????
 * ????????????AOJ DPL_1B
 */

int N,W;
vector<int> v,w;

int main(){
    cin >> N >> W;
    v.resize(N);
    w.resize(N);
    for(int i=0;i<N;i++) cin >> v[i] >> w[i];

    vector<vector<int>> dp(N+1,vector<int>(W+1,0));
    //dp[i][j] : v[i-1],w[i-1]?????§??§?????????????????§???

    for(int i=0;i<N;i++){
        for(int j=0;j<=W;j++){
            if(j-w[i]>=0){
                dp[i+1][j] = max(dp[i][j],dp[i][j-w[i]]+v[i]);
            }else{
                dp[i+1][j] = max(dp[i][j],dp[i+1][j]);
            }
        }
    }

    cout << dp[N][W] << endl;
}