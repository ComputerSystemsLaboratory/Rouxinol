#include <bits/stdc++.h>
#define rep(i,a,n) for(int i=a;i<n;i++)
#define repb(i,a,b) for(int i=a;i>=b;i--)
#define all(a) a.begin(),a.end()
#define o(a) cout<<a<<endl
#define int long long
#define fi first
#define se second
using namespace std;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> pii;

const int INF=1e8;

signed main(){
	int n,m;
    cin>>n>>m;
    vi c(m);
    rep(i,0,m) cin>>c[i];
    int dp[50010]={};
    rep(i,0,50010) dp[i]=INF;
    dp[0]=0;
    rep(i,0,m){
        rep(j,0,50010){
            if(j-c[i]>=0) dp[j]=min(dp[j],dp[j-c[i]]+1);
            //if(j+c[i]<50010) dp[j+c[i]]=min(dp[j+c[i]],dp[j]+1);
        }
    }
    cout<<dp[n]<<endl;
}