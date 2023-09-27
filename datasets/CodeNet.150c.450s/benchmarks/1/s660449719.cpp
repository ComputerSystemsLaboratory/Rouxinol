#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
const int INF = 1001001001;
const double EPS = 1e-10;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    int dp[n+1];
    fill(dp,dp+n,INF);
    for(int i=0;i<n;i++){
        if(dp[i]<a[i])dp[i+1]=min(dp[i+1],a[i]);
        else{
            int idx=lower_bound(dp,dp+n,a[i])-dp;
            dp[idx]=min(dp[idx],a[i]);
        }
    }
    int ans=lower_bound(dp,dp+n,INF)-dp;
    cout<<ans<<endl;
}
