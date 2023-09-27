#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; cin >> n;
  vector<string> judge = {"AC", "WA", "TLE", "RE"};
  map<string, int> ans;
  for (int i = 0; i < n; i++) {
    string s; cin >> s;
    ans[s]++;
  }
  for (auto e : judge) {
    cout << e << " x " << ans[e] << endl;
  }
}