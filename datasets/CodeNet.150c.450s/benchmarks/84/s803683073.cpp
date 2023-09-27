#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
//#include <boost/multiprecision/cpp_int.hpp>
//typedef boost::multiprecision::cpp_int ll;
typedef long double dd;
#define i_7 (ll)(1E9+7)
//#define i_7 998244353
#define i_5 i_7-2
ll mod(ll a){
    ll c=a%i_7;
    if(c>=0)return c;
    return c+i_7;
}
typedef pair<ll,ll> l_l;
ll inf=(ll)1E17;
#define rep(i,l,r) for(ll i=l;i<=r;i++)
#define pb push_back
ll max(ll a,ll b){if(a<b)return b;else return a;}
ll min(ll a,ll b){if(a>b)return b;else return a;}
void Max(ll &pos,ll val){pos=max(pos,val);}//Max(dp[n],dp[n-1]);
void Min(ll &pos,ll val){pos=min(pos,val);}
void Add(ll &pos,ll val){pos=mod(pos+val);}
dd EPS=1E-9;
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
////////////////////////////

ll calc(vector<ll>&v){
    
    ll n=v.size();
    if(n<=1)return 0;
    vector<ll>b(v.begin(),v.begin()+n/2);
    vector<ll>c(v.begin()+n/2,v.end());
    /*
    if(n==5){
        for(auto x:b)cout<<x<<" ";cout<<endl;
        for(auto x:c)cout<<x<<" ";cout<<endl;
    }
     */
    ll res=calc(b)+calc(c);
    /*
    if(n==5){
        for(auto x:b)cout<<x<<" ";cout<<endl;
        for(auto x:c)cout<<x<<" ";cout<<endl;
    }
     */
    for(ll x:b){
        res+=lower_bound(c.begin(),c.end(),x)-c.begin();
    }
    sort(v.begin(),v.end());
    return res;
}


int main(){fastio
    ll n;cin>>n;
    vector<ll>a(n);
    rep(i,0,n-1)cin>>a[i];
    cout<<calc(a)<<endl;
    
    return 0;
}
