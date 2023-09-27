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
  while(cin >> n, n) {
    int a = 0, b = 0;
    REP(i,n) {
      int c, d;
      cin >> c >> d;
      if (c>d) {
        a += c+d;
      } else if (c < d)
        b += c+d;
      else {
        a += c;
        b += c;
      }
    }
    cout << a << " " << b << endl;
  }
}