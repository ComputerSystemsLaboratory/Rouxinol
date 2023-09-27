#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <complex>
#include <cstring>
#include <cstdlib>
#include <string>
#include <cmath>
#include <queue>
using namespace std;

#define REP(i,n) for(int i=0;i<(int)n;++i)
#define FOR(i,c) for(__typeof((c).begin())i=(c).begin();i!=(c).end();++i)
#define ALL(c) (c).begin(), (c).end()
const int INF = 1<<29;

int main() {
  int n;
  cin >> n;
  string ss[9] = {".,!? ", "abc", "def", "ghi", "jkl", "mno", "pqrs"
                   ,"tuv", "wxyz"};
  while(n--) {
    string s;
    cin >> s;
    char n = '*';
    int ct = 0;
    REP(i,s.size()) {
//      printf("%c, %d\n", n, ct);
      if (s[i] == '0') {
        if (ct > 0) {
          cout << ss[n-'1'][(ct-1) % ss[n-'1'].size()];
        }
        ct = 0; n = '*';
      } else if (s[i] != n) {
        n = s[i];
        ct = 1;
      } else {
        ++ct;
      }
    }
    cout << endl;
  }
}