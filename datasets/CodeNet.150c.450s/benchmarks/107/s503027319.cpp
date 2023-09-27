#include <bits/stdc++.h>
#define ll long long
#define V vector<long long>
#define VV vector<vector<long long>>
#define VVV vector<vector<vector<long long>>>
#define rep(i,n) for(ll (i)=0;(i)<(n);++(i))
using namespace std;

int main() {
    string a,b;
    cin>>a>>b;
    VV dp(a.size()+1,V(b.size()+1,0));
    rep(i,a.size()+1)dp[i][0]=i;
    rep(i,b.size()+1)dp[0][i]=i;
    rep(i,a.size()){
        rep(j,b.size()){
            if(a[i]==b[j]){
                dp[i+1][j+1]=min(dp[i+1][j]+1,min(dp[i][j+1]+1,dp[i][j]));
            }else{
                dp[i+1][j+1]=min(dp[i+1][j]+1,min(dp[i][j+1]+1,dp[i][j]+1));
            }
        }
    }
    cout<<dp[a.size()][b.size()]<<endl;
}

