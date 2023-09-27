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
using namespace std;

#define rep(i,n) for(int (i)=0; (i)<(int)(n); ++(i))
#define foreach(c,i) for(__typeof((c).begin()) i=(c).begin();i!=(c).end();i++)
typedef pair<int,int> P;

int N, M;

int main() {
  while (scanf("%d%d", &N, &M), N) {
    priority_queue<P> q;
    int d, p;
    rep(i,N) {
      scanf("%d%d", &d, &p);
      q.push(P(p, d));
    }
    
    while (!q.empty() && M > 0) {
      P p = q.top(); q.pop();
      if (M >= p.second) {
        M -= p.second;
        continue;
      }
      q.push(P(p.first, p.second - M));
      M = 0;
    }

    int ans = 0;
    while (!q.empty()) {
      P p = q.top(); q.pop();
      ans += p.first * p.second;
    }
    printf("%d\n", ans);
  }
  return 0;
}