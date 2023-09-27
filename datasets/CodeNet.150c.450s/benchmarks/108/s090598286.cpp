#include <bits/stdc++.h>
typedef long long ll;
#define ALL(l)  (l).begin(),(l).end()
#define rep(i,n) for(ll (i)=0;(i)<(n);(i)++)
#define rep2(i, s, n) for (ll i = (s); i < (ll)(n); i++)
using namespace std;

//const ll mod =  1000000007;
//const ll maxn = 1000000000;

//---------------------------------------------------------------------------------------------------
using vi = vector<int>; // intの1次元の型に vi という別名をつける
using vll = vector<ll>; // intの1次元の型に vi という別名をつける
using vvll = vector<vll>; // intの2次元の型に vvi という別名をつける
using vs = vector<string>; // stringの1次元の型に vs という別名をつける
using pll = pair<ll, ll>; // これ以降 pii という型名はpair<ll, ll> と同じ意味で使える
//---------------------------------------------------------------------------------------------------


int main() {
   int n;
   cin>>n;
   vi ans(n,-1);
   vi g[n];
   rep(i,n){
       int h,k;
       cin>>h>>k;
       rep(j,k){
           int t;
           cin>>t;
           //cout<<i<<" "<<t-1<<endl;
           g[i].push_back(t-1);
       }
   }
  
   ans.at(0)=0;
   queue<int> q ;
   q.push(0);
   
   while(!q.empty()){
      int from=q.front();
      q.pop();
      for(int to : g[from]){
          if(ans.at(to)!=-1)continue;
          ans.at(to)=ans.at(from)+1;
          q.push(to);
      }
   }
   rep(i,n){
       cout<<i+1<<" "<<ans.at(i)<<endl;
   }
}

