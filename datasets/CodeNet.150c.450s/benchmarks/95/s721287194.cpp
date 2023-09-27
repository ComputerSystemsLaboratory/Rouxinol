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
  int N;
  while(cin >>N && N){
    string s;
    REP(i, N){
      string _s; cin >>_s;
      s += _s;
    }
    int ans = 0, r = 0, l = 0;
    for(int i = 0; i <= (int)s.length() - 4; i += 2){
      string s4 = s.substr(i, 4), s2 = s.substr(i, 2);
      if(l == 0 && r == 0 && (s4 == "luru" || s4 == "rulu")) ++ans;
      if(l == 1 && r == 1 && (s4 == "ldrd" || s4 == "rdld")) ++ans;
      if(s2 == "lu") l = 1; if(s2 == "ru") r = 1; if(s2 == "ld") l = 0; if(s2 == "rd") r = 0;
    }
    cout <<ans <<endl;
  }
  return 0;
}