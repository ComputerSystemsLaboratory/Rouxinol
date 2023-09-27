#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
#define int long long
using P = pair<int,int>;
const int INF = 1002003004005006ll;
signed main(){
    int n;cin >> n;
    int a[n];
    rep(i,n)cin >> a[i];
    vector<int> dp(n+1,INF);
    dp[0] = -INF;

    rep(i,n){
        auto hoge = lower_bound(dp.begin(),dp.end(),a[i])-dp.begin();
        dp[hoge] = min(dp[hoge],a[i]);


    }
    int ans = lower_bound(dp.begin(),dp.end(),INF)- dp.begin();
    cout << ans -1<< endl;

    return 0;
}
