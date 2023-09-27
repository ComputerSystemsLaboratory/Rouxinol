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
typedef pair<int, int> P;

int main() {
  int N, M;
  while(cin >>N >>M && N){
    int ans = 0, t;
    vector<P> v(N);
    REP(i, N) cin >>v[i].second >>v[i].first;
    SORT(v);
    REVERSE(v);
    REP(i, v.size()){
      if(M >= v[i].second) t = v[i].second;
      else if(M != 0) t = M;
      else t = 0;
      ans += v[i].first * (v[i].second - t);
      M -= t;
    }
    cout <<ans <<endl;
  }
  return 0;
}