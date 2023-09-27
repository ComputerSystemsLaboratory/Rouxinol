#include <bits/stdc++.h>
using namespace std;

int main() {
  for(int n; cin >> n && n; ) {
    vector<int> s(n);
    for(int i = 0; i < n; ++i) cin >> s[i];
    sort(s.begin(), s.end());
    cout << accumulate(s.begin()+1, s.end()-1, 0) / (n-2) << endl;
  }
  return 0;
}