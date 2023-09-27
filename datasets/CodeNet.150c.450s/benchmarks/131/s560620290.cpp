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
      // int -> string 変換 (C++11以降から使用可)
      string s = to_string(a);
      int len = s.length();
      // 0埋め
      for (int i = 0; i < l-len; i++) {
        s = "0" + s;
      }
      int big, little;
      sort( s.begin(), s.end(), greater<char>() );
      big = stoi(s);
      sort( s.begin(), s.end() );
      little = stoi(s);
      // aの値を更新
      a = big-little;
    }
  }

  return 0;
}
