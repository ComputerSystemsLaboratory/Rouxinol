#include <bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define rep(i,n)   FOR(i,0,n)
#define pb emplace_back
typedef long long ll;
typedef pair<int,int> pint;

int dp[102][102],p[102];
const int INF=1000100010;
int main(){
    int n,l,r;
    cin>>n;
    rep(i,n){
        cin>>l>>r;
        if(i!=n-1) p[i]=l;
        else p[i]=l,p[i+1]=r;
    }
    FOR(i,1,n+1)FOR(j,1,n+1){
        if(i!=j)dp[i][j]=INF;
        else dp[i][j]=0;
    }
    FOR(i,1,n+1)FOR(l,1,n-i+1)FOR(r,l+1,i+l+1){
        dp[l][i+l]=min(dp[l][i+l],dp[l][r-1]+dp[r][i+l]+p[l-1]*p[r-1]*p[l+i]);
    }
    cout<<dp[1][n]<<endl;
    return 0;
}
