#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
#include <iostream>
#include <algorithm>
#include <sstream>
#include <string>
#include <vector>
#include <queue>
#include <stack>
#include <map>
#include <set>
#include <utility>
#include <cctype>
#include <numeric>
using namespace std;

#define rep(i,n) for(int (i)=0; (i)<(int)(n); ++(i))
#define foreach(c,i) for(__typeof((c).begin()) i=(c).begin();i!=(c).end();i++)

int N, A, B, C, X;

int main() {
  while (scanf("%d%d%d%d%d", &N, &A, &B, &C, &X), N) {
    vector<int> y;
    int t;
    rep(i,N) {
      scanf("%d", &t);
      y.push_back(t);
    }

    // sort(y.begin(), y.end());
    // y.erase(unique(y.begin(), y.end()), y.end());
    
    int turn = 0, p = 0;
    bool ok = false;

    do {
      // rep(i,y.size()) {
      //   printf("{%d}", y[i]);
      // }
      // puts("");
      // if (binary_search(y.begin(), y.end(), X)) {
      //   y.erase(lower_bound(y.begin(), y.end(), X));
      // }

      if (y[p] == X) ++p;
      
      if (p == N) {
        ok = true;
        break;
      }
      X = (A * X + B) % C;
      ++turn;
    } while (turn <= 10000);

    printf("%d\n", ok ? turn : -1);
  }
  return 0;
}