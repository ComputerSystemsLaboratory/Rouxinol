#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;

int main() {
  int n;
  cin >> n;

  vector<int> ans(1e4 + 5, 0);
  for (int i = 1; i < 110; i++) {
    for (int j = 1; j < 110; j++) {
      for (int k = 1; k < 110; k++) {
        int x = i * i + j * j + k * k + i * j + j * k + k * i;
        if (x < ans.size()) ans[x]++;
      }
    }
  }
  for (int i = 1; i <= n; i++) {
    cout << ans[i] << endl;
  }
  return 0;
}