#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, buf;
vector<int> v, dif;

void solve() {
  sort(v.begin(), v.end());
  for(int i = 1; i < n; ++i) {
    dif.push_back(v[i] - v[i - 1]);
  }
  cout << *min_element(dif.begin(), dif.end()) << endl;
  dif.clear();
}

int main() {
  while(cin >> n && n) {
    for(int i = 0; i < n; ++i) {
      cin >> buf;
      v.push_back(buf);
    }
    solve();
    v.clear();
  }
  return 0;
}

