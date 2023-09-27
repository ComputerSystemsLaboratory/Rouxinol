#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
#define repr(i,a,b) for(int i=a;i<b;i++)
#define rep(i,n) for(int i=0;i<n;i++)
#define invrepr(i,a,b) for(int i=b-1;i>=a;i--)
#define invrep(i,n) invrepr(i,0,n)
#define repitr(itr,a) for(auto itr=a.begin();itr!=a.end();++itr)
const int MOD=1e9+7;


int main() {
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;
    vector<int> a(n),b(n);
    rep(i,n) cin >> a[i] >> b[i];
    vector<vector<int>> dp(n,vector<int>(n,1e9)); 
    rep(i,n) dp[i][i]=0;
    repr(i,1,n) {
        invrep(j,i) {
            repr(k,j,i) {
                dp[j][i]=min(dp[j][i],dp[j][k]+dp[k+1][i]+a[j]*b[k]*b[i]);
            }
        }
    }
    cout << dp[0][n-1] << endl;

    return 0;   
}

