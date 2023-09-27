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
  int N; cin >>N;
  set<string> U;
  REP(i, N){
    string s; cin >>s;
    U.insert(s);
  }
  bool o = false;
  int M; cin >>M;
  REP(i, M){
    string s; cin >>s;
    if(U.find(s) == U.end()) cout <<"Unknown " <<s <<endl;
    else{
      cout <<(!o ? "Opened by " : "Closed by ") <<s <<endl;
      o = (o + 1) % 2;
    }
  }
  return 0;
}