#include <bits/stdc++.h>
#pragma GCC optimize ("Ofast", "unroll-loops")
using namespace std;
#define ll long long
#define int ll
#define FOR(i,a,b) for (int i = (a); i<(b); i++)
#define REP(i,n) FOR(i,0,n)
#define REP1(i,n) FOR(i,1,n+1)
#define RREP(i,n) for (int i=(n)-1; i>=0; i--)
#define f first
#define s second
#define pb push_back
#define ALL(x) x.begin(),x.end()
#define SZ(x) (int)(x.size())
#define SQ(x) (x)*(x)
#define pii pair<int, int>
#define endl '\n'
//#define TOAD
#ifdef TOAD
#define bug(x) cerr<<__LINE__<<": "<<#x<<" is "<<x<<endl
#define IOS()
#else
#define bug(...)
#define IOS() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#endif
const ll inf = 1ll<<60;
const int iinf=2147483647;
const ll mod = 998244353;
const ll maxn=1e3+5;
ll pw(ll x, ll p){
    ll ret=1;
    while (p>0){
        if (p&1){
            ret*=x;
            ret%=mod;
        }
        x*=x;
        x%=mod;
        p>>=1;
    }
    return ret;
}
ll inv(ll x){
    return pw(x, mod-2);
}
int cosst(pii x, pii y, pii z){
    return x.f*y.s*z.s;
}
signed main(){
    IOS();
    int n; cin>>n;
    vector<pii> vc(n);
    REP(i,n) cin>>vc[i].f>>vc[i].s;
    vector<int> dp[n+2];
    REP(i,n+2){
        dp[i].resize(n+2);
    }
    //cout<<endl;
    for (int i=n;i>=1;i--){
        FOR(j,i+1,n+1){
            dp[i][j]=inf;
            FOR(k,i,j){
                dp[i][j]=min(dp[i][j], dp[i][k]+dp[k+1][j]+cosst(vc[i-1], vc[k-1], vc[j-1]));
            }
            //cout<<i<<' '<<j<<endl;
            //cout<<dp[i][j]<<endl;
        }
    }
    /*REP1(i,n){
        REP1(j,n){
            cout<<i<<' '<<j<<endl;
            cout<<dp[i][j]<<endl;
        }
    }
    */
    cout<<dp[1][n]<<endl;

}

