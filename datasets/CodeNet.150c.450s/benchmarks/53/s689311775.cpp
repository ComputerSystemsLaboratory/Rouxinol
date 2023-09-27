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
const int MAX_N = 1000000005;

int main() {
  int N; cin >>N;
  cout <<N <<":";
  FOR(i, 2, sqrt(N) + 1){
    while(!(N % i)){
      cout <<" " <<i;
      N /= i;
    }
  }
  if(N > 1) cout <<" " <<N;
  cout <<endl;
  return 0;
}