#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cassert>
#include <string>
#include <cstring>
#include <vector>
#include <list>
#include <map>
#include <set>
#include <stack>
#include <queue>
#include <algorithm>

using namespace std;

// ---------------------
// repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n) FOR(i,0,n)

// debug
#define dump(x)  cerr << #x << " = " << (x) << endl;
#define debug(x) cerr << #x << " = " << (x) << " (L" << __LINE__ << ")" << " " << __FILE__ << endl;

// ---------------------
#define INF 922337203685477580
typedef long long ll;

int dp[50];

int fib(int n) {
  if (dp[n] != -1) return dp[n];
  if (n == 0 || n == 1) {
    dp[n] = 1;
    return dp[n];
  }
  dp[n] = fib(n - 1) + fib(n - 2);
  return dp[n];
}

int main() {
  int X;
  cin >> X;

  REP(i, 50) {
    dp[i] = -1;
  }

  cout << fib(X) << endl;
  return 0;
}