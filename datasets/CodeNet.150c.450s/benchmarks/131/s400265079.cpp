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
    int m;
    cin>>m;
    int cp=m;
    int n;
    cin>>n;
    string t(n,'0');
    int j=n-1;
    while(m){
      t[j--]=char(m%10+'0');
      m/=10;
    }
    if(n==0)return 0;
    map<string,int> mp;
    for(int i=0;i<=20;i++){
      if(mp[t]==0)mp[t]=i+1;
      else {
        cout<<int(mp[t])-1<<" "<<cp<<" "<<i-(int)mp[t]+1<<"\n";
        break; 
      }
      string a=t,b=t;
      sort(all(a),greater<ll>()),sort(all(b));
      int a1=0,b1=0;
      for(j=0;j<n;j++){
        a1*=10;
        a1+=(a[j]-'0');
      }
      for(j=0;j<n;j++){
        b1*=10;
        b1+=(b[j]-'0');
      }
      a1-=b1;
      cp=a1;
       string tmp(n,'0');
     j=n-1;
    while(a1){
      tmp[j--]=char(a1%10+'0');
      a1/=10;
    }
    t=tmp;
    }
  }
}
