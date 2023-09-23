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
  int N, M, P;
  while(cin >>N >>M >>P && N){
    int sum = 0, h = 0;
    REP(i, N){
      int tmp; cin >>tmp;
      sum += (tmp * 100);
      if(i + 1 == M) h = tmp;
    }
    P = 100 - P;
    sum = sum * P / 100;
    cout <<(h == 0 ? 0 : sum / h) <<endl;
  }
  return 0;
}