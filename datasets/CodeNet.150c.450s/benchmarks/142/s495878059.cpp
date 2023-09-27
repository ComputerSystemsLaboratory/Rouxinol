#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;

int main() {
  int n, k;
  cin >> n >> k;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (int i = k; i < n; i++) {
    if (a[i - k] < a[i])
      cout << "Yes" << endl;
    else
      cout << "No" << endl;
  }
  return 0;
}