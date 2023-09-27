#include <cstdio>
#include <algorithm>
#include <stack>
#include <cmath>
using namespace std;

#define REP(i, n) for(int i = 0;i < n;i++)
#define REPR(i, n) for(int i = n;i >= 0;i--)
#define FOR(i, m, n) for(int i = m;i < n;i++)
#define llong long long

int main() {
  int d;
  while(scanf("%d", &d) != EOF) {
    int s = 0;
    FOR(i,1,600/d) {
      s += d*(int)pow(i*d,2);
    }
    printf("%d\n",s);
  }
  return 0;
}