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

int main() {
  int N, M;
  while(scanf("%d %d", &N, &M) && N){
    vector<int> _H(N + 1, 0), _W(M + 1, 0);
    REP(i, N){
      scanf("%d", &_H[i + 1]);
      _H[i + 1] += _H[i];
    }
    REP(i, M){
      scanf("%d", &_W[i + 1]);
      _W[i + 1] += _W[i];
    }
    ++N; ++M;
    vector<int> H, W;
    REP(i, N) FOR(j, i + 1, N) H.push_back(_H[j] - _H[i]);
    REP(i, M) FOR(j, i + 1, M) W.push_back(_W[j] - _W[i]);
    SORT(H); SORT(W);
    int ans = 0;
    REP(i, H.size()) ans += upper_bound(W.begin(), W.end(), H[i]) - lower_bound(W.begin(), W.end(), H[i]);
    printf("%d\n", ans);
  }
  return 0;
}