#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main() {
  int n; cin >> n;
  vector<int> a;

  for (int i = 0; i < n; i++) {
    int _; cin >> _;
    a.push_back(_);
  }

  set<int> x;
  x.insert(a[0]);

  for (int i = 1; i < n; i++) {
    set<int>::iterator it = x.lower_bound(a[i]);

    if (it != x.end())
      x.erase(*it);

    x.insert(a[i]);
  }

  cout << x.size() << endl;
}