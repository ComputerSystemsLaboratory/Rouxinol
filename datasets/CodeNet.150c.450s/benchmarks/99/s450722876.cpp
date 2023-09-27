#include <iostream>
#include <string>
using namespace std;
int main() {
  int n, ans, t, l;
  string s, mcxi = "mcxi";
  cin >> n;
  for (int i = 0; i < n; ++i) {
    ans = 0;
    for (int k = 0; k < 2; ++k) {
      cin >> s;
      l = s.size();
      t = 1;
      for (int j = 0; j < l; ++j) {
	if (s[j] == 'm') {
	  t *= 1000;
	  ans += t;
	  t = 1;
	} else if (s[j] == 'c') {
	  t *= 100;
	  ans += t;
	  t = 1;	
	} else if (s[j] == 'x') {
	  t *= 10;
	  ans += t;
	  t = 1;	
	} else if (s[j] == 'i') {
	  ans += t;
	  t = 1;
	} else {
	  t *= s[j] - '0';
	}
      }
    }
    s = "";
    t = 10000;
    for (int i = 0; i < 4; ++i) {
      t /= 10;
      if (ans/t == 1) s += mcxi[i];
      else if (ans/t) {
	s += ans/t + '0';
	s += mcxi[i];
      }
      ans %= t;
    }
    cout << s << endl;
  }
  return 0;
}