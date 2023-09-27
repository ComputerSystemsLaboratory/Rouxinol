#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define repr(i, n) for (int i = (n); i >= 0; --i)
#define FOR(i, m, n) for (int i = (m); i < (n); ++i)
#define FORR(i, m, n) for (int i = (m); i >= (n); --i)
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
const ll mod2 = 998244353;
const int INF = 1000000005;

ll cnt = 0;

void merge(vector<int>& a, int left, int mid, int right) {
  int n1 = mid - left, n2 = right - mid;
  vector<int> l(n1+1), r(n2+1);
  rep(i, n1) l[i] = a[left + i];
  rep(i, n2) r[i] = a[mid + i];
  l[n1] = INF;
  r[n2] = INF;
  int i = 0, j = 0;
  FOR(k, left, right) {
    if (l[i] <= r[j]) {
      a[k] = l[i++];
    }
    else {
      a[k] = r[j++];
      cnt += mid + j - k - 1;
    }
  }
}

void mergeSort(vector<int>& a, int left, int right) {
  if (left+1 < right) {
    int mid = (left + right) / 2;
    mergeSort(a, left, mid);
    mergeSort(a, mid, right);
    merge(a, left, mid, right);
  }
}

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];

  mergeSort(a, 0, n);

  cout << cnt << endl;


  
  return 0;
}
