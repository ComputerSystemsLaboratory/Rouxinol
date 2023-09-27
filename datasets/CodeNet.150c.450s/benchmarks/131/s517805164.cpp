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

#define REP(i,n) for(int i=0;i<(int)n;++i)
#define FOR(i,c) for(__typeof((c).begin())i=(c).begin();i!=(c).end();++i)
#define ALL(c) (c).begin(), (c).end()
typedef long long ll;
typedef pair<int,int> pii;
const int INF = 1<<29;
const double PI = acos(-1);
const double EPS = 1e-8;

int main() {
  int l;
  string s;
  while(cin >> s >> l, s!="0"||l!=0) {
    map<string,int> mp;
    REP(i,INF) {
      s = string(l - s.size(), '0') + s;
      //cout << s << endl;
      if (mp.count(s)) {
        cout << mp[s] << " " << atoi(s.c_str()) << " " << i-mp[s] << endl;
        break;
      }
      mp[s] = i;
      sort(ALL(s));
      string t = s;
      reverse(ALL(t));
      int tmp = atoi(t.c_str()) - atoi(s.c_str());
      stringstream ss;
      ss << tmp;
      s = ss.str();
      
      //cout << atoi(t.c_str()) - atoi(s.c_str()) << endl;
      
    }
  }
}