#include <iostream>
#include <vector>
using namespace std;

int main() {
  cin.tie(0);
  std::ios_base::sync_with_stdio(false);

  int n;
  vector<int> a;

  cin >> n;
  for (int i = 0; i < n; ++i) {
    int t;
    cin >> t;
    a.push_back(t);
  }

  const int A_MAX = 10000;
  vector<int> c(A_MAX + 1);
  for (int i = 0; i <= A_MAX; ++i) {
    c[i] = 0;
  }
  for (int i = 0; i < n; ++i) {
    ++c[a[i]];
  }
  for (int i = 1; i <= A_MAX; ++i) {
    c[i] += c[i - 1];
  }

  vector<int> b(a.size());
  for (int i = 0; i < n; ++i) {
    b[--c[a[i]]] = a[i];
  }

  for (int i = 0; i < n; ++i) {
    if (i) {
      cout << " ";
    }
    cout << b[i];
  }
  cout << endl;

  return 0;
}

