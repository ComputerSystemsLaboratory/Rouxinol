#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main() {
  string str;
  vector<string> v;
  vector<string>::iterator it_old;
  int l_max = 0;
  int c_max = 0;
  string l_str;
  string c_str;
  int count = 0;

  while (cin >> str) v.push_back(str);
  sort(v.begin(), v.end());
  it_old = v.begin();
  for (vector<string>::iterator it = v.begin(); it != v.end(); it++) {
    if (it->size() > l_max) {
      l_max = it->size();
      l_str = *it;
    }
    if (it != v.begin() && *it_old == *it) {
      count++;
      if (count > c_max) {
        c_max = count;
        c_str = *it;
      }
    }
    else {
      count = 0;
      it_old = it;
    }
  }
  cout << c_str << " " << l_str << endl;
}