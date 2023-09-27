#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<int>;
using vvi = vector<vi>;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int partition(vi &a, int p, int r) {
  int x = a[r], i = p - 1;
  
  for (int j = p; j < r; j++) {
    if (a[j] <= x) {
      i++;
      swap(a[i], a[j]);
    }
  }
  
  i++;
  swap(a[i], a[r]);

  return i;
}

int main() {
  int n;
  cin >> n;

  vi a(n);
  rep(i, n) cin >> a[i];

  int q = partition(a, 0, n - 1);

  rep(i, n) {
    if (i == q) printf("[%d]", a[i]);
    else printf("%d", a[i]);

    i != n - 1 ? printf(" ") : printf("\n");
  }
}

