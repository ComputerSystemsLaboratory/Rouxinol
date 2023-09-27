#include <cstdio>
#include <algorithm>
#include <functional>
#include <stack>
#include <cmath>
using namespace std;

#define REP(i, n) for(int i = 0;i < n;i++)
#define REPR(i, n) for(int i = n;i >= 0;i--)
#define FOR(i, m, n) for(int i = m;i < n;i++)
#define llong long long

int main() {
  int a[4],b[4];
  while(scanf("%d %d %d %d %d %d %d %d", a, a+1, a+2, a+3, b, b+1, b+2, b+3) != EOF) {
    int hit = 0;
    int blow = 0;
    REP(i,4) if(a[i] == b[i]) hit++;
    REP(i,4) {
      REP(j,4) {
	if(i != j && a[i] == b[j]) blow++;
      }
    }
    printf("%d %d\n",hit, blow);
  }
  return 0;
}