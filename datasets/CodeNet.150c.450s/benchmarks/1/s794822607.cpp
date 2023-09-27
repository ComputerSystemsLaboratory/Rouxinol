#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
#define repr(i,a,b) for(int i=a;i<b;i++)
#define rep(i,n) for(int i=0;i<n;i++)
#define invrepr(i,a,b) for(int i=b-1;i>=a;i--)
#define invrep(i,n) invrepr(i,0,n)
#define repitr(itr,a) for(auto itr=a.begin();itr!=a.end();++itr)
const int MOD=1e9+7;
const int INF=2e9;


int main() {
    ios_base::sync_with_stdio(false);


    int n;
    cin >> n;
    vector<int> a(n);
    rep(i,n) cin >> a[i];
    vector<int> dp(n,INF);
    rep(i,n) {
        int j=lower_bound(dp.begin(),dp.end(),a[i])-dp.begin();
        dp[j]=a[i];
    }
    int ans=0;
    rep(i,n) {
        if (dp[i]!=INF) ans=i;
    }
    cout << ans+1 << endl;
    

    return 0;   
}

