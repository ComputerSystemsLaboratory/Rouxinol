#pragma GCC optimize("O3")
#include<bits/stdc++.h> 
using namespace std;
using ll=long long;
using ull=unsigned long long int;
using P=pair<ll,ll>;
template<class T> using V=vector<T>; 
#define fi first
#define se second
#define all(v) (v).begin(),(v).end()
const ll inf=(1e18);
const ll mod=1000000007;
ll gcd(ll a,ll b) {return b ? gcd(b,a%b):a;}
ll lcm(ll c,ll d){return c/gcd(c,d)*d;}
struct __INIT{__INIT(){cin.tie(0);ios::sync_with_stdio(false);cout<<fixed<<setprecision(15);}} __init;
template<class T> bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T> bool chmin(T &a, const T &b) { if (a>b) { a=b; return 1; } return 0; }
int main(){
  while(1){
    ll n,m;
    cin>>n>>m;
    if(n==0&&m==0)return 0;
    V<P> a(n);
    ll sum=0;
    for(int i=0;i<n;i++){
      ll d,p;
      cin>>d>>p;
      sum+=d*p;
      a[i]={p,d};
    } 
    sort(all(a),greater<P>());
    for(int i=0;i<n;i++){
      if(m>=a[i].se){
        sum-=a[i].fi*a[i].se;
        m-=a[i].se;
      }
      else{
        sum-=m*a[i].fi;
        break;
      }
    }
    cout<<sum<<"\n";
  }
}
