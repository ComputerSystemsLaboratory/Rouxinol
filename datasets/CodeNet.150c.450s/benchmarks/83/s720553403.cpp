#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <map>
#include <queue>
#include <algorithm>
using namespace std;

#define REP(i,n) for(int i=0;i<(int)(n);i++)
#define ALL(x) (x).begin(),(x).end()

int main(){
  int n,W;
    cin >> n >> W;
    vector<vector<int> > dp(n+1,vector<int> (W+1,0));
    vector<int> v(n),w(n);
    REP(i,n) cin >> v[i] >> w[i];

    REP(i,n){
        REP(j,W+1){
            if(j<w[i]) dp[i+1][j]=dp[i][j];
            else dp[i+1][j]=max(dp[i][j],dp[i][j-w[i]]+v[i]);
        }
    }

    int max=0;
    REP(j,W+1){
        if(dp[n][j]>max) max=dp[n][j];
    }
    cout << max << endl;
  return 0;
}