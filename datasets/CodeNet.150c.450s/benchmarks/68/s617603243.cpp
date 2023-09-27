#include <bits/stdc++.h>

using namespace std;

int main()
{
  int N, A[1000];
  while(scanf("%d", &N), N) {
    for(int i = 0; i < N; i++) scanf("%d", A + i);
    int ret = 1e9;
    for(int i = 0; i < N; i++) for(int j = 0; j < i; j++) ret = min(ret, abs(A[i] - A[j]));
    printf("%d\n", ret);
  }
}