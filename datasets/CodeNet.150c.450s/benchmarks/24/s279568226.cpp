#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0;i < n;i++)
#define repr(i, n) for(int i = n;i >= 0;i--)
#define frep(i, m, n) for(int i = m;i < n;i++)
#define frepr(i, m, n) for(int i = m;i >= n;i--)
#define vsort(v) sort(v.begin(),v.end())
#define ll long long
#define inf 999999999
typedef vector<vector<int>> vvi;
typedef vector<int> vi;
typedef vector<string> vst;
typedef pair<int,int> P;
typedef pair<ll,ll> LP;
typedef pair<int,P> PP;
typedef pair<ll,LP> LPP;


int main(){
    ll n,m;
    while(cin >> n >> m && n!=0){
        vector<LP> dp(n);
        rep(i,n) cin >> dp[i].second >> dp[i].first;
        sort(dp.begin(),dp.end(),greater<LP>());
        ll ans=0;
        rep(i,n){
            if(dp[i].second<=m){
                m-=dp[i].second;
            }
            else{
                ans+=dp[i].first*(dp[i].second-m);
                m=0;
            }
        }
        // rep(i,dp.size()){
        //     // cout << dp[i].first << "," << dp[i].second << endl;
        //     ans+=dp[i].first*dp[i].second;
        // }
        cout << ans << endl;
    }

    return 0;
}
