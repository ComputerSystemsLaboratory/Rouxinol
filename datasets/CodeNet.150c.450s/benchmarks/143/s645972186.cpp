#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i,n) for(long long i = 0; i < (n); ++i)
#define ll long long
#define P pair<ll,ll>
#define all(v) (v).begin(),(v).end()

const ll mod = 1e9+7;
const ll INF = 1e18;
const double pi = acos(-1.0);

int main(void)
{
    ll n,q,sum=0;
    cin>>n;
    map<ll,ll> mp;
    rep(i,n){
        ll a; cin>>a;
        mp[a]++;
        sum+=a;
    }
    cin>>q;
    rep(i,q){
        ll b,c;
        cin>>b>>c;
        sum+=mp[b]*(c-b);
        mp[c]+=mp[b];
        mp[b]=0;
        cout<<sum<<endl;
    }
    return 0;
}