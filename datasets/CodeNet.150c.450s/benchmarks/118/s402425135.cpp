#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>
#include <cassert>
#include <string>
#include <memory.h>
#include <queue>
#include <cstdio>
#include <cstdlib>
#include <set>
#include <map>
#include <cctype>
#include <iomanip>
#include <sstream>
#include <cctype>
#include <fstream>
#include <cmath>
using namespace std;

#define REP2(i, m, n) for(int i = (int)(m); i < (int)(n); i++)
#define REP(i, n) REP2(i, 0, n)
#define ALL(c) (c).begin(), (c).end()
#define ITER(c) __typeof((c).begin())
#define PB(e) push_back(e)
#define FOREACH(i, c) for(ITER(c) i = (c).begin(); i != (c).end(); ++i)
#define MP(a, b) make_pair(a, b)
#define PARITY(n) ((n) & 1)

typedef long long ll;
typedef pair<ll, ll> P;
const int INF = 1000 * 1000 * 1000 + 7;
const double EPS = 1e-10;

int ndays(int y, int m){
  if(y % 3 == 0) return 20;
  else return m % 2 ? 20 : 19;
}

int main(){
  int n;
  int y, m, d;
  cin >> n;
  while(n--){
    cin >> y >> m >> d;

    int days = 0;
    while(y != 1000){
      days++;
      d++;
      if(d == ndays(y, m) + 1){
        d = 1;
        m++;
        if(m == 11){
          m = 1;
          y++;
        }
      }
    }
    cout << days << endl;
  }
  return 0;
}