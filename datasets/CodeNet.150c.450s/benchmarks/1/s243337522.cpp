#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0; i<(n); i++)
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
int main(){
    ll n; cin>>n;
    vector<ll> a(n);
    rep(i,n) cin>>a[i];
    ll inf=1e15;
    vector<ll> dp(n, inf);
    rep(i,n){
        auto itr=lower_bound(dp.begin(), dp.end(), a[i]);
        ll index=itr-dp.begin();
        dp[index]=a[i];
    }
    ll res=0;
    rep(i,n){
        if(dp[i]<inf){
            res=i;
        }
    }
    cout<<res+1<<endl;
    return 0;
}
