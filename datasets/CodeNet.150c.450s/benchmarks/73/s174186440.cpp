#include <bits/stdc++.h>
#ifdef dbg
#include "./printer.hpp"
#else
#define dump(x) void(0)
#endif

using namespace std;
#define ll long long
inline long  toInt(string s) {long  v; istringstream sin(s);sin>>v;return v;}
template<class T> inline string toString(T x) {ostringstream sout;sout<<x;return sout.str();}

int main(){
  ios_base::sync_with_stdio(0);

  ll n, q;
  cin >> n >> q;

  ll power = 1;
  ll sizepower;
  for(ll i = 1;;i++){
    power *= 2;
    if(n <= power){
      sizepower = i;
      break;
    }
  }

  vector<ll> d (1 << sizepower + 1, 0);
  
  for(ll i = 0; i < q; i++){
    ll t,x,y;
    cin >> t >> x >> y;
    if(t == 0){
      while(1){
	d[x] += y;
	if(x == 1 << sizepower){
	  break;
	}
	x = x + ((-x) & x);
      }
    }else{
      ll ans = 0;
      x--;
      while(1){
	if(x == 0){
	  break;
	}
	ans += d[x];
	x = x - (x & (-x));
      }
      ans *= -1;
      while(1){
	if(y == 0){
	  break;
	}
	ans += d[y];
	y = y - (y & (-y));
      }
      cout << ans << '\n';
    }

  }

}