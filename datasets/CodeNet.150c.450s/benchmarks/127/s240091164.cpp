#include <iostream>
#include <algorithm>
#include <set>
#include <string>
using namespace std;

set<string> S;


int main() {
  int m;
  cin >> m;
  while(m--) {
    S.clear();
    string s;
    cin >> s;
    int N = s.size();
    for(int i = 1; i < N; ++i) {
      string a = s.substr(0,i);
      string b = s.substr(i);
      for(int j = 0; j < 2; ++j, swap(a,b)) {
	for(int k = 0; k < 4; ++k) {
	  string c, d;
	  c = a;
	  d = b;
	  if(k & 1) reverse(c.begin(), c.end());
	  if(k & 2) reverse(d.begin(), d.end());
	  S.insert(c+d);
	  S.insert(d+c);
	}
      }
    }
    cout << S.size() << endl;
  }
  return 0;
}