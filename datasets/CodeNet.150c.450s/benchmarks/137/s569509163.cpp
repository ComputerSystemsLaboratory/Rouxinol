#include <iostream>
#include <set>
#include <string>
using namespace std;
string bufo,bufstr;

int main() {
  int n;
  set<string> dict;
  cin >> n;
  for (int i=0;i<n;++i) {
    cin >> bufo >> bufstr;
    if (bufo=="insert") {
      dict.insert(bufstr);
    }
    else {
      int yn;
      yn = dict.count(bufstr);
      if (yn==1) cout << "yes" << endl;
      else cout << "no" << endl;
    }
  }
}