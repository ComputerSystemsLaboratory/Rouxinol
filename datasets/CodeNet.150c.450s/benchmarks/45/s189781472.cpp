#include <bits/stdc++.h>
#ifdef dbg
#include "./printer.hpp"
#else
#define dump(x) void(0)
#endif

using namespace std;

#define MOD 1000000007
#define INF 100000000000000000
#define EXIST(s,e) ((s).find(e)!=(s).end())
#define ll long long
#define ull unsigned long long
#define pb push_back
#define ALL(x) ((x).begin(), (x).end())
#define sync(); ios_base::sync_with_stdio(0);

inline long  toInt(string s) {long  v; istringstream sin(s);sin>>v;return v;}
template<class T> inline string toString(T x) {ostringstream sout;sout<<x;return sout.str();}


ll ex_euclid(ll a, ll b, ll &x, ll &y){
  ll xx,yy;
  x = yy = 1;
  xx = y = 0;
  while(b){
    ll m = a / b;
    ll t = xx;
    xx = x - m * xx;
    x = t;
    t = yy;
    yy = y - m * yy;
    y = t;
    t = b;
    b = a % b;
    a = t;
  }

  return a;
}

ll inverse(ll a){
  pair<ll,ll> p {MOD,a};
  pair<pair<ll,ll>,pair<ll,ll>> k {{1,0}, {0,1}};
  while(1){
    if(p.second == 1){
      return k.second.second;
    }
    ll temp = p.second;
    pair<ll,ll> tempp = k.second;
    k.second.first = k.first.first - (p.first / p.second) * k.second.first;
    k.second.second = k.first.second - (p.first / p.second) * k.second.second;
    p.second = p.first % p.second;
    p.first = temp;
    k.first = tempp;
  }
}

ll pw(ll a, ll b){
  ll ans = 1;
  ll mul = a;
  
  while(b){
    if((b & 1ll) == 1){
      ans *= mul;
      ans %= MOD;
    }
    mul = mul * mul;
    mul %= MOD;
    b = (b >> 1);
  }
  return ans;
}



int main(){
  sync();
  ll m,n;
  cin >> m >> n;
  cout << pw(m,n) << endl;
  return 0;
}