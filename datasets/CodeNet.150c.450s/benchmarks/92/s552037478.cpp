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
#define INF 100000

int main(){
  ios_base::sync_with_stdio(0);
  ll a,b;
  while(cin >> a >> b){
    string s = to_string(a+b);
    cout << s.length() << '\n';
  }
  
  return 0;

}