#include <bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define rep(i,n)   FOR(i,0,n)
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pint;
using namespace std;

int dp[50000];
int main(){
    int n,m,c;
    cin>>n>>m;
    rep(i,n+1) dp[i]=1000100010;
    dp[0]=0;
    rep(i,m){
        cin>>c;
        for(int j=0;j+c<=n;++j) dp[c+j]=min(dp[c+j],dp[j]+1);
    }
    cout<<dp[n]<<endl;
    return 0;
}