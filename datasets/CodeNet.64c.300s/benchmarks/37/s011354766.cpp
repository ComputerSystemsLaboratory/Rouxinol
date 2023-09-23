#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <complex>
#include <queue>
#include <map>
#include <set>
#include <cstring>
#include <cstdlib>
#include <string>
#include <cmath>
using namespace std;

#define REP(i,n) for(int i=0;i<(int)n;++i)
#define FOR(i,c) for(__typeof((c).begin())i=(c).begin();i!=(c).end();++i)
#define ALL(c) (c).begin(), (c).end()
const int INF = 1<<29;

int main() {
  int n;
  while(cin>>n,n) {
    int res = 0;
    for (int i= 1;i<n/2+1;++i) {
      int sum = 0;
      REP(j,n) {
        sum += i+j;
        if (sum == n)
          res++;
        if (sum>=n)
          break;
      }
    }
    cout <<res << endl;
  }
}