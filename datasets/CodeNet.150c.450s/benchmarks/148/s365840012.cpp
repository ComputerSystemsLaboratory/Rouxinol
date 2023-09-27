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
  for (int i = 0; i < 4; i++) {
    cout << judge.at(i) << " x " << ans[judge.at(i)] << endl;
  }
}