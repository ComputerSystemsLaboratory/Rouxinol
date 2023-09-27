#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <complex>
#include <cstring>
#include <cstdlib>
#include <set>
using namespace std;

#define REP(i,n) for(int i=0;i<(int)n;++i)
#define FOR(i,c) for(__typeof((c).begin())i=(c).begin();i!=(c).end();++i)
#define ALL(c) (c).begin(), (c).end()

int main() {
  int n;
  cin >> n;
  
  while(n--) {
    string s;
    cin >> s;
    set<string> se;
    for (int i=1;i<s.length();i++) {
      vector<string> s1(2,s.substr(0,i));
      vector<string> s2(2,s.substr(i));
      reverse(ALL(s1[1]));
      reverse(ALL(s2[1]));
      REP(j,2) {
        REP(k,2) {
          se.insert(s1[j]+s2[k]);
          se.insert(s2[k]+s1[j]);
        }
      }
    }
    cout << se.size() << endl;
  }
}