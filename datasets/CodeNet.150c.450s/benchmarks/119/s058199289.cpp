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

typedef long long ll;

using namespace std;

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
  /// This is like map in haskell, python, etc.
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

int field[51][51];
int w, h;

void rec(int x, int y) {
  if (x < 0 || x > 50) return;
  if (y < 0 || y > 50) return;
  if (!field[x][y]) return;
  
  field[x][y] = 0;
  int dx[8] = { 0, 1, 1, 1, 0, -1, -1, -1 };
  int dy[8] = { -1, -1, 0, 1, 1, 1, 0, -1 };
  
  REP(i, 8) {
    rec(x + dx[i], y + dy[i]);
  }
}

int main() {
  while (true) {
    w = Scanner::nextInt();
    h = Scanner::nextInt();
    if (w + h == 0) break;
    memset(field, 0, sizeof(field));
    
    REP(i, h) {
      REP(j, w) {
        int c = Scanner::nextInt();
        field[i][j] = c;   
      }
    }
       
    int count = 0;   
    REP(i, h) {
      REP(j, w) {
        if (field[i][j]) {
          count++;
          rec(i, j);
        }
      }
    }
    PRINT(count);
  }
 
  
  return 0;
}