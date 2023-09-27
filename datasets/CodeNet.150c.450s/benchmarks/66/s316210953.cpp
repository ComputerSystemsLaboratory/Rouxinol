#include <iostream>
#include <iomanip>
#include <sstream>
#include <cstdio>
#include <string>
#include <vector>
#include <algorithm>
#include <complex>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <cassert>
#include <climits>
#include <queue>
#include <set>
#include <map>
#include <valarray>
#include <bitset>
#include <stack>
using namespace std;

#define REP(i,n) for(int i=0;i<(int)(n);++i)
#define FOR(i,c) for(__typeof((c).begin())i=(c).begin();i!=(c).end();++i)
#define ALL(c) (c).begin(), (c).end()
typedef long long ll;
typedef pair<int,int> pii;
const int INF = 1<<29;
const double PI = acos(-1);
const double EPS = 1e-8;

int main() {
  int n;
  cin >> n;
  set<string > se;
  REP(i,n) {
    string s;
    cin >> s;
    se.insert(s);
  }
  int m;
  cin >> m;
  bool f = 1;
  REP(i,m) {
    string s;
    cin >> s;
    if (se.count(s)) {
      if (f) cout << "Opened by ";
      else cout << "Closed by ";
      f ^= 1;
    } else {
      cout << "Unknown ";
    }
    cout << s << endl;
  }
}