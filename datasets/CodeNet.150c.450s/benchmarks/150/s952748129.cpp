#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n;
  cin >> n;
  vector<int> freq((int) 1e6 + 1, 0);
  for (int i = 0; i < n; i++) {
    int val;
    cin >> val;
    freq[val]++;
  }
  vector<int> ans;
  for (int i = 0; i <= 1000000; i++) {
    while (freq[i]) {
      freq[i]--;
      ans.push_back(i);
    }
  }
  for (int i = 0; i < n; i++) {
    if (i > 0) {
      cout << ' ';
    }
    cout << ans[i];
  }
  cout << '\n';
  return 0;
}

