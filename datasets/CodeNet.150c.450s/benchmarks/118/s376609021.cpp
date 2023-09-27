#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
#include <iostream>
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

int N, Y, M, D;

int solve() {
  int ret = 1;
  // 日を満たす
  if (Y % 3 == 0) {
    ret += 20 - D;
  } else {
    if (M % 2) ret += 20 - D;
    else ret += 19 - D;
  }
  // 月を増加
  ++M;
  if (M != 11) {
    for (; M < 11; ++M) {
      if (Y % 3 == 0) { ret += 20; }
      else {
        if (M % 2) ret += 20;
        else ret += 19;
      }
    }
  }
  // 年を増加
  ++Y;
  for (; Y <= 999; ++Y) {
    if (Y % 3 == 0) ret += 200;
    else ret += 195;
  }
  return ret;
}

int main() {
  scanf("%d", &N);
  rep(z,N) {
    scanf("%d%d%d", &Y, &M, &D);
    printf("%d\n", solve());
  }
  return 0;
}