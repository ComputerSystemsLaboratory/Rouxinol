// #define USE_CPP11
// #define USE_PRINTF

#include <iostream>
#include <iomanip>
#include <map>
#include <set>
#include <utility>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <climits>
#include <list>
#include <queue>
#include <deque>
#include <stack>
#include <numeric>
#include <complex>
#include <memory>
#include <sstream>

#ifdef USE_CPP11
#include <unordered_map>
#include <unordered_set>
#include <functional>
#endif

#define PRINT(obj) cout << obj << endl
#define REP(i, n) for(int (i) = 0; (i) < (n); i++)
#define SPACE " "

typedef long long ll;

using namespace std;

const int INF = 1e9;

namespace Scanner {
#ifdef USE_PRINTF
  int    nextInt()    { int    d; scanf("%d" , &d); return d; }
  float  nextFloat()  { float  f; scanf("%f" , &f); return f; }
  double nextDouble() { double f; scanf("%lf", &f); return f; }  
  string nextString() { string s; scanf("%s" , &s); return s; }
  ll     nextll()     { ll     l; scanf("%ll", &l); return l; }
#else
  int    nextInt()    { int    d; cin >> d; return d; }
  float  nextFloat()  { float  f; cin >> f; return f; }
  double nextDouble() { double f; cin >> f; return f; }  
  string nextString() { string s; cin >> s; return s; }
  ll     nextll()     { ll     l; cin >> l; return l; }
#endif

  string getLine() { 
    string input;
    getline(cin, input);
    return input;
  }
};

namespace myLibrary {
  vector<string> split(const string& str, char delim) {
    vector<string> ret;
    size_t current = 0, found;
    while ((found = str.find_first_of(delim, current)) != string::npos) {
      ret.push_back(string(str, current, found - current));
      current = found + 1;
    }
    ret.push_back(string(str, current, str.size() - current));
    return ret;
  }
  
#ifdef USE_CPP11
  ///
  /// higher-order functional
  /// This is something like map in haskell, python, etc.
  /// Sample usage:
  ///   vector<int> a = {1, 2, 3, 4, 5};
  ///   vector<int> b = myLibrary::_Map<int, int>(a, [](int n){
  ///     return n * n;
  ///   });
  /// Result:
  ///   b = 1, 4, 9, 16, 25
  ///
  template<typename T_IN, typename T_OUT, class Functor>
  vector<T_OUT> _Map(vector<T_IN> src, Functor func) {
    vector<T_OUT> ret;
    for (int i = 0; i < src.size(); i++) {
      ret.push_back(func(src[i]));
    }
    return ret;
  }
#endif

};

/// BEGIN //////////////////////////////////////////////////////////

int memo[(int)1e6 + 1];
int memo_odd[(int)1e6 + 1];

int solve(int n) {
  int ret = 0;
  int s_min = INF;
  if (n < 1) return memo[n] = 0;
  if (memo[n] > 0) return memo[n];
  for (int i = sqrt(n); i >= 1; i--) {
    int t = i * (i + 1) * (i + 2) / 6;
    if (t > n) continue;
    if (t == n) return memo[n] = 1;
    int s = solve(n - t);
    if (s == 0) continue;
    if (s < s_min) {
      s_min = s;
    } 
  }
  
  return memo[n] = (s_min + 1);
}

int solve_odd(int n) {
  int ret = 0;
  int s_min = INF;
  if (n < 1) return memo_odd[n] = 0;
  if (memo_odd[n] > 0) return memo_odd[n];
  for (int i = sqrt(n); i >= 1; i--) {
    int t = i * (i + 1) * (i + 2) / 6;
    if (t % 2 == 0) continue;
    if (t > n) continue;
    if (t == n) return memo_odd[n] = 1;
    int s = solve_odd(n - t);
    if (s == 0) continue;
    if (s < s_min) {
      s_min = s;
    } 
  }
  
  return memo_odd[n] = (s_min + 1);
}

void calc(int n) {
  cout << solve(n) << SPACE << solve_odd(n) << endl;
}

int main() {
  while (true) {
    int n = Scanner::nextInt();
    if (n == 0) break;
    calc(n);
  }
  return 0;
}

/// END   //////////////////////////////////////////////////////////