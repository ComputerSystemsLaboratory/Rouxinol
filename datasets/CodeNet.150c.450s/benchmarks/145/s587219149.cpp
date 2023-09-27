#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
  map<string,int> m;
  string s;
  int maxn = 0;
  string maxns;
  string maxls;
  while(cin >> s) {
    if(++m[s] > maxn) {
      maxn = m[s];
      maxns = s;
    }
    if(s.size() > maxls.size()) maxls = s;
  }
  cout << maxns << " " << maxls << endl;
  return 0;
}