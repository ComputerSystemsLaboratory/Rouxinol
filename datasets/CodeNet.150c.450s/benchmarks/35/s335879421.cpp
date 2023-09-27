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
  while(1){
    int n;
    scanf("%d",&n);
    if(n == 0) break;
    int a[n];
    REP(i,n) scanf("%d",a+i);
    int maxseq = a[0];
    int sum = 0;
    REP(i,n) {
      sum = max(sum+a[i], a[i]);
      if(maxseq < sum) maxseq = sum;
    }
    if(maxseq < sum) maxseq = sum;
    printf("%d\n",maxseq);
  }
  return 0;
}