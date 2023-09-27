#include <cstdio>
#include <algorithm>
#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
  int a, l;
  while (cin >> a >> l) {
    if (a == 0 && l == 0) { break; }

    map<int, int> mp;
    int i = 0;

    while (true) {
      if ( mp.find(a) != mp.end() ) {
        cout << mp[a] << " " << a << " " << i-mp[a] << endl;
        break;
      }
      mp[a] = i++;
      char c_s[10];
      sprintf(c_s, "%d", a);
      string s = string(c_s);
      int len = s.length();
      // 0埋め
      for (int i = 0; i < l-len; i++) {
        s = "0" + s;
      }
      int big, little;
      sort( s.begin(), s.end(), greater<char>() );
      big = atoi(s.c_str());
      sort( s.begin(), s.end() );
      little = atoi(s.c_str());
      // aの値を更新
      a = big-little;
    }
  }

  return 0;
}
