#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <cmath>

#define say(args) cout << (args) << endl
#define rep(i, a) for (int i = 0; i < a; i++)

using namespace std;

string reverse_str(string str) {
  int l = str.size();
  for (int i = 0; i < l / 2; i++) {
    int swap_idx  = l - i - 1;
    char tmp      = str[i];
    str[i]        = str[swap_idx];
    str[swap_idx] = tmp;
  }
  return str;
}

int count_organize(string &str) {
  int n = str.size();
  map<string, int> counter;
  for (int i = 1; i < n; i++) {
    for (int j = 1; j < n; j++) {
      if (i + j == n) {
        string one = str.substr(0, i);
        string two = str.substr(i, j);
        // cout << "i : " << i << ", j : " << j << endl;
        // cout << "str : " << str << ", one : " << one << ", two : " << two << endl;
        // cout << reverse_str( string("ab") ) << endl;
        counter[one + two] = 1;
        counter[one + reverse_str(two)] = 1;
        counter[reverse_str(one) + two] = 1;
        counter[reverse_str(one) + reverse_str(two)] = 1;
        counter[two + one] = 1;
        counter[two + reverse_str(one)] = 1;
        counter[reverse_str(two) + one] = 1;
        counter[reverse_str(two) + reverse_str(one)] = 1;
      }
    }
  }
  int count = 0;
  for (auto itr : counter) {
    count += 1;
  }
  return count;
}

int main() {
  int n;
  cin >> n;
  vector<string> strings(n);
  rep(i, n) {
    cin >> strings[i];
  }

  for (auto str : strings) {
    say( count_organize(str) );
  }
}