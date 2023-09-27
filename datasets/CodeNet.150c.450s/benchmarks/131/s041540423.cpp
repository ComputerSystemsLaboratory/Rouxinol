#include <bits/stdc++.h>
#include <cstdlib>
#include <cmath>
#include <algorithm>
using namespace std;
using ll = long long;
using P = pair<ll,ll>;
using Graph= vector<vector<ll>>;
struct edge{ll to ; ll cost ;} ;
using graph =vector<vector<edge>> ;
#define rep(i,n) for (ll i=0; i < (n); ++i)
#define rep2(i,n,m) for(ll i=n;i<=m;i++)
#define rep3(i,n,m) for(ll i=n;i>=m;i--)
#define pb push_back
#define eb emplace_back
#define ppb pop_back
#define mpa make_pair
#define fi first
#define se second 
#define set20 cout<<fixed<<setprecision(20) ;
const ll INF=1e18 ;
inline void chmax(ll& a,ll b){a=max(a,b);}
inline void chmin(ll& a,ll b){a=min(a,b);}
double pi=acos(-1) ;
ll gcd(ll a, ll b) { return b?gcd(b,a%b):a;}
ll lcm(ll a, ll b) { return a/gcd(a,b)*b;}
 
 
 int main(){
  while(1){
    int a,b ;
    cin>>a>>b ;
    if(a==0&&b==0) break ;

    map<ll,ll> mp ;
    mp[a]=1;
    int kai=1 ;
   while(1){
      kai++ ;
   
    vector<ll> A(b) ;
    int i=0 ;
    while(a>0){
      A[i]=a%10 ;
      a/=10 ;
      i++ ;
    }
    sort(A.begin(),A.end()) ;
    int x =0 ;
    rep(j,b){
      x*=10 ;
      x+= A[j] ;
    }
    sort(A.rbegin(),A.rend()) ;
    int y=0 ;
    rep(j,b){
      y*=10 ;
      y+=A[j] ;
    }
    int ans= y-x ;
    int u= mp[ans] ;
    if(u!=0){
      cout<<mp[ans]-1<<" "<<ans<<" "<<kai-mp[ans]<<endl ;
      break ;
    }
    else mp[ans]=kai ;
    a= ans;
    }

  }
   return 0 ;
 }


