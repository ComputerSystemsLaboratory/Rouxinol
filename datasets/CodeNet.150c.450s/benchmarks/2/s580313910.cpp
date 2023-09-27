#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int> &a, int p, int r) {
  int x = a[r - 1];
  int i = p;
  for (int j = p; j < r - 1; ++j) {
    if (a[j] <= x) {
      int t = a[i];
      a[i] = a[j];
      a[j] = t;
      ++i;
    }
  }
  int t = a[i];
  a[i] = a[r - 1];
  a[r - 1] = t;
  return i;
}

int main() {
  cin.tie(0);
  std::ios_base::sync_with_stdio(false);

  int n;
  cin >> n;
  vector<int> a;
  for (int i = 0; i < n; ++i) {
    int t;
    cin >> t;
    a.push_back(t);
  }

  int q = partition(a, 0, n);
  for (int i = 0; i < n; ++i) {
    if (i) {
      cout << " ";
    }
    if (i == q) {
      cout << "[" << a[i] << "]";
    } else {
      cout << a[i];
    }
  }
  cout << endl;

  return 0;
}

