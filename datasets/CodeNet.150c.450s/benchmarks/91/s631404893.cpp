#include <bits/stdc++.h>
using namespace std;


bool prime[1000000];
int wei[1000000], sqrt_N = 1000;

int main()
{
  int N, i, j, k;

  for (i = 1; i <= 5; i += 4){
    for (j = i; j <= sqrt_N; j += 6){
      for (k = 1; k <= sqrt_N && (N = 4 * k * k + j * j) <= N; ++k){
        if (N > 1000000) break;
        prime[N] = !prime[N];
      }
      for (k = j + 1; k <= sqrt_N && (N = 3 * k * k - j * j) <= N; k += 2){
        if (N > 1000000) break;
        prime[N] = !prime[N];
      }
    }
  }
  for (i = 2; i <= 4; i += 2){
    for (j = i; j <= sqrt_N; j += 6){
      for (k = 1; k <= sqrt_N && (N = 3 * k * k + j * j) <= N; k += 2){
        if (N > 1000000) break;
        prime[N] = !prime[N];
      }
      for (k = j + 1; k <= sqrt_N && (N = 3 * k * k - j * j) <= N; k += 2){
        if (N > 1000000)break;
        prime[N] = !prime[N];
      }
    }
  }
  for (i = 3; i <= sqrt_N; i += 6){
    for (j = 1; j <= 2; ++j){
      for (k = j; k <= sqrt_N && (N = 4 * k * k + i * i) <= N; k += 3){
        if (N > 1000000) break;
        prime[N] = !prime[N];
      }
    }
  }
  for (i = 5; i <= sqrt_N; ++i){
    if (prime[i]){
      for (j = i * i; j <= N; j += i * i){
        prime[j] = false;
      }
    }
  }
  prime[2] = prime[3] = true;

  for (i = 2; i < 1000000; ++i){
    wei[i] += wei[i - 1];
    if (prime[i]) wei[i]++;
  }

  while (~(scanf("%d", &N))) printf("%d\n", wei[N]);

  return 0;
}