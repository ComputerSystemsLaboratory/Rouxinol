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
#define Int long long int
typedef complex<double> P;
const int MOD = 1000000007;

Int mod_pow(Int x, Int n, Int mod){
  if(n == 0) return 1;
  Int ret = mod_pow(x * x % mod, n / 2, mod);
  if(n & 1) ret = ret * x % mod;
  return ret;
}

int main() {
  Int M, N; cin >>M >>N;
  cout <<mod_pow(M, N, MOD) <<endl;
  return 0;
}