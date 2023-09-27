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
    int ans = 0;
    FOR(i, 1, N){
      FOR(j, 2, N - i + 1){
        int sum = 0;
        REP(k, j) sum += i + k;
        if(N == sum) ++ans;
      }
    }
    cout <<ans <<endl;
  }
  return 0;
}