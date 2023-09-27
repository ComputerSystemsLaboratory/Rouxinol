#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<int>;
using vvi = vector<vi>;
using vll = vector<ll>;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

ll cnt = 0;

int merge(vll &a, int left, int mid, int right) {
  int n_comp = 0, n1 = mid - left, n2 = right - mid;

  vll l(n1 + 1), r(n2 + 1);
  rep(i, n1) l[i] = a[left + i];
  rep(i, n2) r[i] = a[mid + i];

  l[n1] = LLONG_MAX;
  r[n2] = LLONG_MAX;
  
  int i = 0, j = 0;
  for (int k = left; k < right; k++) {
    n_comp++;
    if (l[i] <= r[j]) {
      a[k] = l[i];
      i++;
    } else {
      a[k] = r[j];
      j++;
      cnt += n1 - i;
    }
  }

  return n_comp;
}

int merge_sort(vll &a, int left, int right) {
  int n_comp = 0;
  if (right > left + 1) {
    int mid = (right + left) / 2;
    n_comp += merge_sort(a, left, mid);
    n_comp += merge_sort(a, mid, right);
    n_comp += merge(a, left, mid, right);
  }

  return n_comp;
}

int main() {
  int n;
  cin >> n;

  vll a(n);
  rep(i, n) scanf("%lld", &a[i]);

  merge_sort(a, 0, n);
  cout << cnt << endl;
}

