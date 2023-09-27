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
  int a[5];
  REP(i,5) scanf("%d",a+i);
  sort(a,a+5,greater<int>());
  REP(i,4) printf("%d ",a[i]);
  printf("%d\n",a[4]);
  return 0;
}