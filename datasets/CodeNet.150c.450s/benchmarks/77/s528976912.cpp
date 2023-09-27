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
const int H = 21;
const int W = 21;

bool check(bool v[H][W]){
  REP(i, H) REP(j, W) if(v[i][j]) return false;
  return true;
}

int main() {
  int N;
  map<char, int> my, mx;
  my['N'] = 1; my['E'] = 0; my['S'] = -1; my['W'] = 0; mx['N'] = 0; mx['E'] = 1; mx['S'] = 0; mx['W'] = -1;
  while(cin >>N && N){
    bool v[H][W];
    REP(i, H) REP(j, W) v[i][j] = false;
    REP(i, N){
      int x, y; cin >>x >>y;
      v[y][x] = true;
    }
    int y = 10, x = 10;
    int M; cin >>M;
    REP(i, M){
      char c;
      int d;
      cin >>c >>d;
      REP(j, d){
        y += my[c]; x += mx[c];
        v[y][x] = false;
      }
    }
    cout <<(check(v) ? "Yes" : "No") <<endl;
  }
  return 0;
}