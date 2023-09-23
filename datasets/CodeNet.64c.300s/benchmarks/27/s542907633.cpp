#include <bits/stdc++.h>
#ifdef dbg
#include "./printer.hpp"
#else
#define dump(x) void(0)
#endif

#define MOD 1000000007
#define INF 
using namespace std;
#define ll long long
inline long  toInt(string s) {long  v; istringstream sin(s);sin>>v;return v;}
template<class T> inline string toString(T x) {ostringstream sout;sout<<x;return sout.str();}

int main(){
  ll n,x;

  while(cin >> n >> x && n + x){
    ll cnt = 0;
    for(ll a = 1; a <= n; a++){
      for(ll b = a + 1; b <= n; b++){
	for(ll c = b + 1; c <= n; c++){
	  if(a + b + c == x){
	    cnt++;
	  }
	}
	  
      }
    }
    cout << cnt << endl;
  }

}