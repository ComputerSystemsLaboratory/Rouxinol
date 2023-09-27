#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,a,b) for (ll i = (a); i < (b); i++)
#define REP(i,n) rep(i,0,n)

void solve() 
{
    ll n,k;cin>>n>>k;
    ll a[n];REP(i,n)cin>>a[i];
    REP(i,n-k)cout<<(a[i]<a[i+k]?"Yes":"No")<<endl;
}

int main()
{
    cin.tie(0);
	ios::sync_with_stdio(false);
    solve();
    return 0;
}