#include <bits/stdc++.h>
using namespace std;
using ll= long long ;
using P = pair<ll,ll>;
#define rep(i,n) for (ll i = 0; i<(ll)(n); i++)
#define mod 1000000007
#define pi 3.141592653589793
typedef vector<ll> vcl;

ll gcd(ll a,ll b){
    if(b>a) swap(a,b);
    if(b==0) return a;
    return gcd(b,a%b);
}
ll lcm(ll a, ll b){
    ll g=gcd(a,b);
    return a/g*b;
}
ll rep_jijo(ll n,ll x){
    if(x==0) return 1;
    if(x%2==0){
        ll t =rep_jijo(n,x/2);
        return t*t%mod;
  }
  return n*rep_jijo(n,x-1)%mod;
}
ll c2(ll n){
    return n*(n-1)/2;
}

int main(){
    ll n;
    cin>>n;
    ll nac=0,nwa=0,ntl=0,nre=0;
    vector<string> a(n);
    rep(i,n){cin>>a[i];
        if(a[i]=="AC")nac++;
        else if(a[i]=="WA")nwa++;
        else if(a[i]=="TLE")ntl++;
        else if(a[i]=="RE")nre++;
    }
cout<<"AC x "<<nac<<endl;
cout<<"WA x "<<nwa<<endl;
cout<<"TLE x "<<ntl<<endl;
cout<<"RE x "<<nre<<endl;
}