#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cstdlib>
#include<vector>
#include<string>
#include<sstream>
#include<cmath>
#include<numeric>
#include<map>
#include<stack>
#include<queue>
#include<cassert>
using namespace std;
int inf = 1000000000;

int func(string a){
  string s = "";
  if( 'a' <= a[0] && a[0] <= 'z' ) a = '1' + a;
  s += a[0];
  for(int i=1; i<a.size(); i++){
    if( 'a' <= a[i] && a[i] <= 'z' && 'a' <= a[i-1] && a[i-1] <= 'z' ) s += '1';
    s += a[i];
  }

  int ret = 0;
  for(int i=0; i<s.size(); i++){
    if( '0' <= s[i] && s[i] <= '9') continue;

    if( s[i] == 'm' ) ret += (s[i-1]-'0') * 1000;
    if( s[i] == 'c' ) ret += (s[i-1]-'0') * 100;
    if( s[i] == 'x' ) ret += (s[i-1]-'0') * 10;
    if( s[i] == 'i' ) ret += (s[i-1]-'0') * 1;
  }
  // cerr << s << " " << ret << endl;
  return ret;
}

string func1(int n){
  string s = "";
  string a = "mcxi";
  int q = 1000;
  for(int i=0; i<4; i++){
    if( n / q != 0 ){
      s += to_string(n / q) + a[i];
      n %= q;
    }
    q /= 10;
  }

  string ret = "";
  for(char c: s){
    if( c == '1' ) continue;
    ret += c;
  }

  return ret;
}

int main(void) {

  int n;
  cin >> n;
  for(int i=0; i<n; i++){
    string a, b;
    cin >> a >> b;

    int sum = func(a) + func(b);
    // cerr << func(a) << " " << func(b) << " " << sum << endl;
    cout << func1(sum) << endl;

  }



  return 0;
}


// EOF