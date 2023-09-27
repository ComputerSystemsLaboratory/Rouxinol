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
const int INF = 1e9 + 7;

int solve(vector<int> &v){
  int low = v[0], ans = -INF;
  for(int i = 1; i < v.size(); ++i){
    ans = max(ans, v[i] - low);
    low = min(low, v[i]);
  }
  return ans;
}
 
int main() {
  int N; cin >>N;
  vector<int> v(N);
  REP(i, N) cin >>v[i];
  cout <<solve(v) <<endl;
  return 0;
}