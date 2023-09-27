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
  ll a,b;
  while(cin >> a >> b){
    cout << __gcd(a,b) << ' ' << a / __gcd(a,b) * b << endl;
  }
  
}