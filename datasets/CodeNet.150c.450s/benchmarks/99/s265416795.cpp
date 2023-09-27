#include <algorithm>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <iostream>
#include <vector>
#include <string>
#include <stack>
#include <queue>
#include <map>
#include <set>

#define rep(i,n) for (int i = 0; i < (n); ++i)

using namespace std;
 
int decode_mcxi(string x) {
  int t = 1;
  int ret = 0;
  rep(i, x.length()) {
    switch (x[i]) {
      case 'm':
        ret += t * 1000;
        t = 1;
        break;
      case 'c':
        ret += t * 100;
        t = 1;
        break;
      case 'x':
        ret += t * 10;
        t = 1;
        break;
      case 'i':
        ret += t;
        t = 1;
        break;
      default:
        t = x[i]-'0';
    }
  }
  return ret;
}

string encode_mcxi(int a) {
  string ret = "";

  int m = 0, c = 0, x = 0, i = 0;
  int cnt = 0;

  while (a != 0) {
    if (cnt == 0) { i = a%10; } 
    if (cnt == 1) { x = a%10; }
    if (cnt == 2) { c = a%10; }
    if (cnt == 3) { m = a%10; }
    a /= 10;
    cnt++;
  }
  if ( 2 <= m && m <= 9 ) { ret += char(m+'0'); }
  if ( m != 0 ) { ret += "m"; }
  if ( 2 <= c && c <= 9 ) { ret += char(c+'0'); }
  if ( c != 0 ) { ret += "c"; }
  if ( 2 <= x && x <= 9 ) { ret += char(x+'0'); }
  if ( x != 0 ) { ret += "x"; }
  if ( 2 <= i && i <= 9 ) { ret += char(i+'0'); }
  if ( i != 0 ) { ret += "i"; }

  return ret;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  cout << setprecision(20) << fixed;
  
  int n; cin >> n;

  while (n--) {
    string a, b;
    cin >> a >> b;
    
    int sum = decode_mcxi(a) + decode_mcxi(b);

    cout << encode_mcxi(sum) << endl;
  }
  return 0;
}
