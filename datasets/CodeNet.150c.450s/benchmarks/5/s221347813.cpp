#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; ++i) {
    cin >> v[i];
  }
  for (int i = v.size() - 1; i >= 0; --i) {
    if (i < v.size() - 1) cout << " ";
    cout << v[i];
  }
  cout << endl;
  return 0;
}