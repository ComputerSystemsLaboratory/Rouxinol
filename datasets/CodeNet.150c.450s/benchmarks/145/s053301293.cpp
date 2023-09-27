#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
  string str, mf, ml;
  map<string, int> mp;
  while (cin >> str) {
    mp[str]++;
    if (mp[str] > mp[mf]) mf = str;
    if (str.length() > ml.length()) ml = str;
  }
  cout << mf << " " << ml << endl;
}
