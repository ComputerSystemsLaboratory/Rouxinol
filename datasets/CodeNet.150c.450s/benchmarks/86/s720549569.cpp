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

int N, M, P, X[102];

int solve() {
  if (X[M] == 0) return 0;
  double sum = accumulate(X, X+N, 0);
  sum *= (100 - P);
  return static_cast<int>(sum / X[M]);
}

int main() {
  while (scanf("%d%d%d", &N, &M, &P), N) {
    --M;
    rep(i,N) scanf("%d", X+i);
    printf("%d\n", solve());
  }
  return 0;
}