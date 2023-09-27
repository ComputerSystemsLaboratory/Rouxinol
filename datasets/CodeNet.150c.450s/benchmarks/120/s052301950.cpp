#include <iostream>
#include <complex>
#include <sstream>
#include <string>
#include <algorithm>
#include <deque>
#include <list>
#include <map>
#include <numeric>
#include <queue>
#include <vector>
#include <set>
#include <limits>
#include <cstdio>
#include <cctype>
#include <cmath>
#include <cstring>
#include <cstdlib>
#include <ctime>
using namespace std;
#define REP(i, j) for(int i = 0; i < (int)(j); ++i)
#define FOR(i, j, k) for(int i = (int)(j); i < (int)(k); ++i)
#define SORT(v) sort((v).begin(), (v).end())
#define REVERSE(v) reverse((v).begin(), (v).end())
typedef complex<double> P;

int check(vector< vector<int> > &v, int R, int C){
  int res = 0;
  REP(j, C){
    int cnt[2];
    cnt[0] = cnt[1] = 0;
    REP(i, R) cnt[v[i][j]]++;
    res += max(cnt[0], cnt[1]);
  }
  return res;
}

int main() {
  int R, C;
  while(cin >>R >>C && (R || C)){
    int ans = 0;
    vector< vector<int> > v(R, vector<int>(C)), _v;
    REP(i, R) REP(j, C) cin >>v[i][j];
    REP(b, (1 << R)){
      _v = v;
      REP(i, R){
        if(((b >> i) & 1) == 0) continue;
        REP(j, C) _v[i][j] = 1 - _v[i][j];
        ans = max(ans, check(_v, R, C));
      }
    }
    cout <<ans <<endl;
  }
  return 0;
}