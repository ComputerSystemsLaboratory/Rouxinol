#include <bits/stdc++.h>
using namespace std;
using ll = long long;
typedef pair<int, int> P;
ll Mod = 1000000007;
int main() {
  int D;
  cin >> D;
  int c[26];
  int las[26];
  for (int i = 0; i < 26; i++) {
    cin >> c[i];
    las[i] = 0;
  }
  int s[D][26];
  for (int i = 0; i < D; i++) {
    for (int j = 0; j < 26; j++) {
      cin >> s[i][j];
    }
  }
  int choose[D];
  for (int i = 0; i < D; i++) cin >> choose[i];
  int ans = 0;
  for (int i = 1; i <= D; i++) {
    int score = 0;
    score += s[i-1][choose[i-1] - 1];
    for (int j = 0; j < 26; j++) {
      if (choose[i-1] - 1 != j) {
        score -= c[j] * (i - las[j]);
      }
    }
    las[choose[i-1] - 1] = i;
    ans += score;
    cout << ans << endl;
  }
  return 0;
}