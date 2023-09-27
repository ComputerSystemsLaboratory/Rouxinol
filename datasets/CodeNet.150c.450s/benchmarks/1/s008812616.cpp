#include<bits/stdc++.h>
#define rep(i,N) for(int i=0;i<(N);i++)
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
using namespace std;
const long long MOD = 1e9 + 7;
const long long INF = 1e12;
const int inf = 1e9;
const int mod = 1e9+7;
typedef long long ll;
typedef pair<ll,int> P;
typedef set<int> S;
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    vector<int> dp(100100,inf);
    rep(i,n) cin>>v[i];
    rep(i,n){
        int id = lower_bound(dp.begin(),dp.end(),v[i]) - dp.begin();
        dp[id]=v[i];
    }
    //rep(i,6) cout<<dp[i]<<" ";
    //cout<<endl;
    int  ans = lower_bound(dp.begin(),dp.end(),inf) - dp.begin();
    cout<<ans<<endl;
    return 0;
}
