#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 44;
int n;
ll dp[N+1];

ll fib(int n) {
  if (n <= 1) return 1LL;
  return dp[n]>0 ? dp[n] : dp[n] = fib(n-1) + fib(n-2);
}

int main() {
  memset(dp, 0, sizeof(dp));
  scanf("%d ", &n);
  printf("%lld\n", fib(n));
  return 0;
}