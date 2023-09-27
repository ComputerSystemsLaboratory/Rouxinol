#pragma GCC optimize("O3")
//#define _GLIBCXX_DEBUG
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
  int d;
  cin>>d;
  if(d==0)return 0;
  multiset<P> dat;
  for(int i=0;i<d;i++){
    string s,t;
    cin>>s>>t;
    ll a=0,b=0;
    ll n=ll(s[0]-'0'),m=ll(t[0]-'0');
    n*=10;m*=10;
    n+=ll(s[1]-'0'),m+=ll(t[1]-'0');
    a+=3600*n,b+=3600*m;
    n=0,m=0;
    n+=ll(s[3]-'0'),m+=ll(t[3]-'0');
    n*=10;m*=10;
    n+=ll(s[4]-'0'),m+=ll(t[4]-'0');
    a+=60*n,b+=60*m;
    n=0,m=0;
    n+=ll(s[6]-'0'),m+=ll(t[6]-'0');
    n*=10;m*=10;
    n+=ll(s[7]-'0'),m+=ll(t[7]-'0');
    a+=n;b+=m;
    dat.insert({a,b});
  }
  int ans=0;
  while(dat.size()){
    ll bfo=-1;
    ans++;
    for(auto ite=dat.begin();ite!=dat.end();){
      if(bfo<=(*ite).fi){
        bfo=(*ite).se;
        ite=dat.erase(ite);
      }else ite++;
    }
  }
  cout<<ans<<"\n";
}
}
