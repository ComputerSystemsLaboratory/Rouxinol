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
  int c= a*a+ b*b ;int d= b ;
  bool flag = 0;
  for(int i = a+1 ;i*i<c;i++){
      d= b ;
     while(i*i+d*d>=c){
         if(i>=d) break ;
         if(i*i+d*d==c){
             cout<<i<<" "<<d<<endl ;
             flag= 1 ;
             break ;
         }
         else d-- ;
     }
     if(flag) break ;
  }
  if(flag) continue ;

  while(!flag){
      c++ ;
   for(int i=1 ;i*i<c;i++){
       if(flag) break ;
      int res= c- i*i ;
      rep2(j,i+1,res){
          if(j*j>res) break ;
          if(j*j==res){
              cout<<i<<" "<<j<<endl ;
              flag=1 ;
              break ;
          }
      }
    
   }
  } 

  }
  return 0 ; 
}


