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
  ll cnt = 0;
  for(ll i = 0; i < n; i++){
    ll a;
    cin >> a;
    for(ll i = 2; i * i <= a; i++){
      if(a % i == 0){
	cnt++;
	break;
      }
    }
  }

  cout << n - cnt << endl; 
}