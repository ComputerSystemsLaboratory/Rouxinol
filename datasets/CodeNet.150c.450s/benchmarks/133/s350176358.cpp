#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  
  int d;
  cin >> d;
  
  vector<int> c(26);
  for (int i = 0; i < 26; i++) cin >> c.at(i);
  
  vector<vector<ll>> s(d, vector<ll>(26));
  for (int i = 0; i < d; i++) {
    for (int j = 0; j < 26; j++) {
      cin >> s.at(i).at(j);
    }
  }
  
  vector<int> t(d);
  for (int i = 0; i < d; i++) {
    cin >> t.at(i);
    t.at(i)--;
  }
  
  vector<vector<int>> dim(d, vector<int>(26, 1));
  ll suff = 0;
  for (int i = 0; i < d; i++) {
    suff += s.at(i).at(t.at(i));
    if (i > 0) {
      for (int j = 0; j < 26; j++) dim.at(i).at(j) = dim.at(i - 1).at(j) + 1;
    }
    dim.at(i).at(t.at(i)) = 0;
    for (int j = 0; j < 26; j++) {
      suff -= c.at(j) * dim.at(i).at(j);
    }
    cout << suff << '\n';
  }
}