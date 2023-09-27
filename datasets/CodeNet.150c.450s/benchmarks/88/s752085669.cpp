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
map<P,P> mp;
int main(){
  for(int i=1;i<=150;i++){
    for(int j=i+1;j<=150;j++){
      mp[P(i*i+j*j,i)]=P(i,j);
    }
  }
while(1){
  ll h,w;
  cin>>h>>w;
  if(h==0||w==0)return 0;
  auto ite=mp.find(P(h*h+w*w,h));
  ite++;
  cout<<ite->se.fi<<" "<<ite->se.se<<"\n";
}
}
