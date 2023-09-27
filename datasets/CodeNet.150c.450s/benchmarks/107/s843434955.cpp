#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000000
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rept(i,k,n) for(int i = (k); i < (int)(n); i++)

int main(){
    string s,t;
    cin>>s>>t;
    vector<vector<int> > dp(s.size()+1,vector<int>(t.size()+1,0));
    rep(i,s.size()+1) dp[i][0]=i;
    rep(i,t.size()+1) dp[0][i]=i;
    rept(i,1,s.size()+1){
        rept(j,1,t.size()+1){
            dp[i][j]=min(dp[i-1][j-1]+(s[i-1]!=t[j-1]),min(dp[i][j-1],dp[i-1][j])+1);
        }
    }
    cout<<dp.back().back()<<endl;
   
    return 0;
}
