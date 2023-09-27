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
#define P pair<int, int>
#define SORT(v) sort((v).begin(), (v).end())
#define REVERSE(v) reverse((v).begin(), (v).end())
//#define int long long
const int N = 1e6 + 10;
const int INF = 1e9 + 10;

int main() {
  vector<int> v, vv;
  for(int i = 1; i * (i + 1) * (i + 2) / 6 < N; ++i) v.push_back(i * (i + 1) * (i + 2) / 6);
  REP(i, v.size()) if(v[i] % 2) vv.push_back(v[i]);
  vector<int> dp(N, INF), dp_odd(N, INF);
  dp[0] = dp_odd[0] = 0;
  REP(i, v.size()) for(int j = v[i]; j < N; ++j) dp[j] = min(dp[j], dp[j - v[i]] + 1);
  REP(i, vv.size()) for(int j = vv[i]; j < N; ++j) dp_odd[j] = min(dp_odd[j], dp_odd[j - vv[i]] + 1);
  int n;
  while(cin >>n && n) cout <<dp[n] <<" " <<dp_odd[n] <<endl;
  return 0;
}