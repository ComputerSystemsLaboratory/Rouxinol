#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
// using ll = long long;
// using P = pair<int,int>;

int main(){
    string s1, s2;
    cin >> s1 >> s2;
    int n1, n2;
    n1 = s1.size();
    n2 = s2.size();
    vector<vector<int> > dp(n1+1, vector<int>(n2+1));
    rep(i, n1){
        dp[i+1][0] = i+1;
    }
    rep(i, n2){
        dp[0][i+1] = i+1;
    }
    rep(i, n1){
        rep(j, n2){
            if(s1[i] == s2[j]){
                dp[i+1][j+1] = dp[i][j];
            }else{
                dp[i+1][j+1] = min(dp[i][j]+1,min(dp[i+1][j]+1, dp[i][j+1]+1));
            }
        }
    }
    cout << dp[n1][n2] << endl;
    return 0;
}

