#include <iostream>
#include <algorithm>
#define INF 1 << 9
#define MAX 1000001
using namespace std;

int pollock[200];
int pollock2[200] = {INF};
int dp[MAX];
int dpo[MAX];

void calcDpo() {
  for (int i = 0; i < MAX; i++)
    dpo[i] = i;
  for (int i = 0; i < 200; i++) {
    if (pollock2[i] > MAX) break;
    for (int j = pollock2[i]; j < MAX - 1; j++) {
      dpo[j] = min(dpo[j], dpo[j - pollock2[i]] + 1);
    }
  }
}

void calcDp() {
  for (int i = 0; i < MAX; i++)
    dp[i] = i;
  for (int i = 1; i < 200; i++) {
    if (pollock[i] > MAX) break;
    for (int j = pollock[i]; j < MAX - 1; j++) {
      dp[j] = min(dp[j], dp[j - pollock[i]] + 1);
    }
  }
}

void calcPollock() {
  for (int i = 0; i < 200; i++) {
    pollock[i] = i * (i + 1) * (i + 2) / 6;
  }
  pollock2[0] = 0;
  int j = 1;
  for (int i = 0; i < 200; i++) {
    if (pollock[i] % 2)
      pollock2[j++] = pollock[i];
  }
}

int main() {
  calcPollock();
  calcDp();
  calcDpo();
  

  while (true) {
    int n;
    cin >> n;
    if (n == 0) return 0;

    cout << dp[n] << ' ' << dpo[n] << endl;
  }
}