#include <iostream>
#include <cstdio>
#include <map>
using namespace std;

map<string, int > hindo;

int main()
{
  string str;
  while (cin >> str) {
    hindo[str]++;
  }
  int mx = 0, mx_l = 0;
  for (map<string, int>::iterator it = hindo.begin(); it != hindo.end(); it++) {
    mx = max(it->second, mx);
    mx_l = max(mx_l, (int)it->first.size());
  }
  for (map<string, int>::iterator it = hindo.begin(); it != hindo.end(); it++) {
    if (mx == it->second) {
      cout << it->first << " ";
    }
  }
  for (map<string, int>::iterator it = hindo.begin(); it != hindo.end(); it++) {
    if (mx_l == it->first.size()) {
      cout << it->first << endl;
    }
  }
  return 0;
}