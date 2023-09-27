#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  vector<int> x(1e5 + 11, 0);
  ll sum = 0;
  for (int i = 0; i < n; i++) {
    x[a[i]]++;
    sum += a[i];
  }
  int q;
  cin >> q;
  for (int i = 0; i < q; i++) {
    int b, c;
    cin >> b >> c;
    sum += (c - b) * x[b];
    x[c] += x[b];
    x[b] = 0;
    cout << sum << endl;
  }
  return 0;
}