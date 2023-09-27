#include <iostream>
#include <limits>
#include <vector>
using namespace std;

void countingSort(vector<int> a,  vector<int> &b, int max_num) {
  vector<int> c(max_num+1, 0);

  for (int i = 0; i < a.size(); i++)
    c[a[i]]++;

  for (int i = 1; i < c.size(); i++)
    c[i] += c[i-1];

  for (int i = a.size()-1; i >= 0; i--) {
    b[c[a[i]]-1] = a[i];
    c[a[i]]--;
  }
}

int main() {
  int n, k = numeric_limits<int>::min();
  cin >> n;

  vector<int> a(n), b(n);

  for (int i = 0; i < n; i++) {
    cin >> a[i];
    k = max(k, a[i]);
  }

  countingSort(a, b, k);

  for (int i = 0; i < n; i++) {
    if (i) cout << ' ';
    cout << b[i];
  }
  cout << endl;
  return 0;
}