#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(i = 0; i < n; ++i)

int score[100];
int n, i, k, ans;

int main() {
  for(;;) {
    scanf("%d", &n);
    if(n == 0) break;
    REP(i, n) scanf("%d", &score[i]);
    sort(score, score + n);
    int ans = 0;
    for(int j = 1; j <= n - 2; ++j) ans += score[j];
    printf("%d\n", ans / (n - 2));
  }
  return 0;
}