#pragma GCC optimize("O3")
#include<bits/stdc++.h> 
using namespace std;
using ll=long long;
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
      int n;
      cin>>n;
      if(n==0)return 0;
      V<V<ll>> a(n,V<ll>(5));
      for(int i=0;i<n;i++)for(int j=0;j<5;j++)cin>>a[i][j];
      ll ans=0;
      while(1){
          bool make=false;
          for(int i=0;i<n;i++){
              ll bfo=a[i][0],cnt=1,ind=0;
              for(int j=1;j<5;j++){
                  if(bfo!=-1&&j!=4&&bfo==a[i][j])cnt++;
                  else{
                      if(bfo!=-1&&bfo==a[i][j])cnt++;
                      if(bfo!=-1&&cnt>=3){
                          make=true;
                        ans+=bfo*cnt;
                        for(int k=ind;k<ind+cnt;k++)a[i][k]=-1;
                      }
                      cnt=1;bfo=a[i][j];
                      ind=j;
                  }
              }
          }
          if(!make)break;
          for(int i=n-1;i>=1;i--){
              for(int j=0;j<5;j++)if(a[i][j]==-1){
                  for(int k=i;k>=0;k--)if(a[k][j]!=-1){
                      swap(a[k][j],a[i][j]);
                      break;
                  }
              }
          }
      }
     cout<<ans<<"\n";
  }
}
