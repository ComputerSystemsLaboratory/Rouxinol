#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(long long i=0;i<n;i++)
#define P pair<ll,ll>
#define F first
#define S second
#define all(a) (a.begin(),a.end())
long long INF=1000000000000000000;
long long mod=1000000007;
int dp[1010][1010];
int main(void){
    int q;cin>>q;string x,y;
    rep(k,q){
        cin>>x>>y;
        rep(i,1010)rep(j,1010)dp[i][j]=0;
        
        rep(i,x.size())rep(j,y.size()){
            if(x[i]==y[j])dp[i+1][j+1]=dp[i][j]+1;
            else dp[i+1][j+1]=max(dp[i][j+1],dp[i+1][j]);
        }
        cout<<dp[x.size()][y.size()]<<endl;
    }
}
