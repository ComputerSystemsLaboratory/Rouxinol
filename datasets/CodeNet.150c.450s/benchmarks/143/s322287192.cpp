#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define f first
#define s second

void solve(){
    int n; cin>>n;
    // vector<int> v(n);
    ll sum=0;
    ll a;
    map<ll,ll> mp;
    for(int i=0;i<n;++i){
        cin>>a;
        // cin>>v[i];
        mp[a]++;
        sum += a;
    }
    ll q; cin>>q;
    ll x,y;
    while(q--){
        cin>>x>>y;
        ll k=mp[x];
        sum -= k*x;
        sum += k*y;
        mp[x] = 0;
        mp[y] += k;
        cout<<sum<<endl;
    }
}
int main() {
    // int t; cin>>t;
    // while(t--){
        solve();
        // cout<<endl;
    // }
}