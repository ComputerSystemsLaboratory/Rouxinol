#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <complex>
#include <cstring>
#include <cstdlib>
#include <string>
#include <cmath>
#include <map>
using namespace std;

#define REP(i,n) for(int i=0;i<(int)n;++i)
#define FOR(i,c) for(__typeof((c).begin())i=(c).begin();i!=(c).end();++i)
#define ALL(c) (c).begin(), (c).end()
const int INF = 1<<29;

int main() {
  int n;
  while(cin >> n, n) {
    map<char, char> mp;
    REP(i,n) {
      char a,b;
      cin >> a >> b;
      mp[a] = b;
    }
    int m;
    cin >> m;
    string s;
    REP(i,m) {
      char a;
      cin >> a;
      if (mp[a])
        s += mp[a];
      else
        s += a;
    }
    cout << s << endl;
  }
}