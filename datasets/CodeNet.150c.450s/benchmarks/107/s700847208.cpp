#include <bits/stdc++.h>
#define rep(i,n) for(ll i=0;i<(n);i++)
typedef long long ll;
using namespace std;

int main(){
    string s1,s2;
    cin >> s1 >> s2;
    int len1,len2;
    len1 = s1.size();
    len2 = s2.size();
    int dp[1001][1001];//dp[i][j] iまで、jまでの編集距離
    rep(i,len1+1){
        dp[i][0] = i;
    }
    rep(j,len2+1){
        dp[0][j] = j;
    }
    rep(i,len1)rep(j,len2){
        if(s1[i] == s2[j]){
            dp[i+1][j+1] = dp[i][j];
        }
        else{
            dp[i+1][j+1] = min(dp[i][j+1]+1,min(dp[i][j]+1,dp[i+1][j]+1));
        }
    }
    cout << dp[len1][len2] << endl;
}
