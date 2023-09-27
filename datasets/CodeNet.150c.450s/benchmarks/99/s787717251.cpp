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
#define REV(s) (string((s).rbegin(), (s).rend()))
#define SPACE " "

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


/// BEGIN //////////////////////////////////////////////////////////

int mcxi2int(string mcxi) {
  int ret = 0;
  
  int t = 1;
  REP(i, mcxi.size()) {
    switch (mcxi[i]) {
      case 'm': {
        ret += t * 1000;
        t = 1;
        break;
      }
      case 'c': {
        ret += t * 100;
        t = 1;
        break;
      }
      case 'x': {
        ret += t * 10;
        t = 1;
        break;
      }
      case 'i': {
        ret += t;
        break;
      }
      default: {
        t = mcxi[i] - '0'; 
      }
    }
  }
  
  return ret;
}

string int2mcxi(int m) {
  string ret;
  if (m >= 1000) {
    if (m / 1000 != 1) {
      ret += '0' + m / 1000;
    }
    ret += 'm';
    m %= 1000;
  }
  if (m >= 100) {
    if (m / 100 != 1) {
      ret += '0' + m / 100;
    }
    ret += 'c';
    m %= 100;
  }
  if (m >= 10) {
    if (m / 10 != 1) {
      ret += '0' + m / 10;
    }
    ret += 'x';
    m %= 10;
  }
  if (m > 0) {
    if (m != 1) {
      ret += '0' + m;
    }
    ret += 'i';
  }
  
  return ret;
}

int main() {
  int n = Scanner::nextInt();
  while (n--) {
    int m1 = mcxi2int(Scanner::nextString());
    int m2 = mcxi2int(Scanner::nextString());
    int m = m1 + m2;
    PRINT(int2mcxi(m));
  }
  
  return 0;
}

/// END   //////////////////////////////////////////////////////////