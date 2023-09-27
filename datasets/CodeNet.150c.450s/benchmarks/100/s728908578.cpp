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

llong factorial(int n) {
  if(n == 0) return 1;
  return (llong)n * factorial(n-1);
}

int main() {
  int n;
  scanf("%d",&n);
  printf("%lld\n",factorial(n));
  return 0;
}