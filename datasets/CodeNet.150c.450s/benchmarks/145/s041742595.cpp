#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

#define REP(i,n) for(int i=0;i<(int)n;++i)
#define FOR(i,c) for(__typeof((c).begin())i=(c).begin();i!=(c).end();++i)
#define ALL(c) (c).begin(), (c).end()

int main() {
  multiset<string> mset;
  string s;
  int maxlen = 0, maxc = 0;
  string ans, ans2;
  while(cin>>s) {
    mset.insert(s);
    if (maxlen<s.length()) {
      maxlen = s.length();
      ans2 = s;
    }
    if (maxc<mset.count(s)) {
      maxc = mset.count(s);
      ans = s;
    }
  }
  cout << ans << " " << ans2 << endl;
  
  
}