#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace  std;
#define REP(i, n) for(long long (i)=0; (i)<(n); ++i)
#define ALL(a) (a).begin(),(a).end()

int EditDistanse(const string &s, const string &t){
    int N = s.size(), M = t.size();
    vector<vector<int>> dp(N+1, vector<int>(M+1, 0));
    dp[0][0] = 0;
    for(int i=1; i<=M; i++) dp[0][i] = dp[0][i-1] + 1;
    for(int i=1; i<=N; i++) dp[i][0] = dp[i-1][0] + 1;
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            if(s[i]==t[j]){
                dp[i+1][j+1] = min({dp[i][j], dp[i+1][j]+1, dp[i][j+1]+1});
            }
            else{
                dp[i+1][j+1] = min({dp[i][j]+1, dp[i+1][j]+1, dp[i][j+1]+1});
            }
        }
    }
    return dp[N][M];
}
signed main(){
    string s, t;
    cin>>s>>t;
    cout << EditDistanse(s, t) << endl;
    return 0;
}
