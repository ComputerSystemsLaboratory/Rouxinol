#include <algorithm>
#include <cfloat>
#include <climits>
#include <cmath>
#include <complex>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <functional>
#include <iostream>
#include <map>
#include <memory>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <utility>
#include <vector>
 
using namespace std;
 
typedef long long ll;
 
#define sz size()
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define all(c) (c).begin(), (c).end()
#define rep(i,a,b) for(ll i=(a);i<(b);++i)
#define per(i,a,b) for(ll i=b-1LL;i>=(a);--i)
#define clr(a, b) memset((a), (b) ,sizeof(a))
#define ctos(c) string(1,c)
#define print(x) cout<<#x<<" = "<<x<<endl;
 
#define MOD 1000000007

ll f(vector<ll> &v1, ll p){
  vector<ll> v;
  rep(i,0,v1.sz){
    v.pb(v1[i]);
  }
  long long index = 0;
  for(long long i = 62; i >= 0; i--){
    long long flag = 0;
    for(long long j=index;j<v.sz;j++){
      if(v[j]&(1LL<<i)){
        flag = 1;
        swap(v[index],v[j]);
        break;
      }
    }
    for(long long j=index+1;j<v.sz;j++){
      if(v[j]&(1LL<<i)){
        v[j]^=v[index];
      }
    }
    if(flag==1){
      index++;
    }
  }
  index = 0;
  for(long long i = 62;i >= 0; i--){
    if(index==v.sz)break; 
    if((v[index]&(1LL<<i))!=0&&(p&(1LL<<i))==0){
      index++;
    }
    else if((v[index]&(1LL<<i))!=0&&(p&(1LL<<i))!=0){
      p ^= v[index];
      index++;
    }
  }
  if(p==0)return 1;
  return 0;
}

int main(){
  ll T;
  cin>>T;
  rep(tt,0,T){
    ll n;
    cin>>n;
    vector<ll> v;
    rep(i,0,n){
      ll a;
      cin>>a;
      v.pb(a);
    }
    string s;
    cin>>s;
    reverse(all(v));
    reverse(all(s));
    ll flag = 1;
    vector<ll> v1;
    rep(i,0,n){
      if(s[i]=='0'){
        v1.pb(v[i]);
      }
      else{
        if(f(v1,v[i])==0)flag=0;
      }
    }
    if(flag==1){
      cout << 0 << endl;
    }
    else{
      cout << 1 << endl;
    }
  }
  return 0;
}