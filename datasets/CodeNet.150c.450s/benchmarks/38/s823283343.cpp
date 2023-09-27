#include <bits/stdc++.h>
#ifdef dbg
#include "./printer.hpp"
#else
#define dump(x) void(0)
#endif

#define MOD 1000000007
using namespace std;
#define ll long long
inline long  toInt(string s) {long  v; istringstream sin(s);sin>>v;return v;}
template<class T> inline string toString(T x) {ostringstream sout;sout<<x;return sout.str();}

int main(){
  ll n;
  cin >> n;
  for(ll i = 0; i < n; i++){
    ll a,b,c;
    cin >> a >> b >> c;
    ll ma = max(a,b);
    ma = max(ma,c);
    if(a*a + b*b + c*c - ma*ma == ma*ma){
      cout << "YES" << endl;
    }else{
      cout << "NO" << endl;
    }
  }
}