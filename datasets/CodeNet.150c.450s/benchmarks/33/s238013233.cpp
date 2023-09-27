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

int check(int p, int x){
  return p * (100 + x) / 100;
}


int main() {
  int x, y, s;
  while(cin >>x >>y >>s && s){
    int ans = 0;
    FOR(i, 1, s) FOR(j, 1, s) if(check(i, x) + check(j, x) == s) ans = max(ans, check(i, y) + check(j, y));
    cout <<ans <<endl;
  }
  return 0;
}