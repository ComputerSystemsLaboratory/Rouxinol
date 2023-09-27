#include<iostream>
#define ll long long
using namespace std;
int a[200000], l[100005], r[100005];
ll cnt;
void merge(int left, int mid, int right) {
  int x = mid - left, y = right - mid;
  for (int i = 0; i<x; ++i) l[i] = a[left + i];
  for (int i = 0; i<y; ++i) r[i] = a[mid + i];
  l[x] = r[y] = 1000000001;
  x = y = 0;
  for (int i = left; i<right; ++i) {
    if (l[x] <= r[y]) a[i] = l[x++];
    else {
      a[i] = r[y++];
      cnt += mid - left - x;
    }
  }
}

void mergesort(int left, int right) {
  if (left + 1<right) {
    int mid = (right + left) / 2;
    mergesort(left, mid);
    mergesort(mid, right);
    merge(left, mid, right);
  }
}

int main() {
  int n; cin >> n;
  for (int i = 0; i<n; ++i) cin >> a[i];
  mergesort(0, n);
  cout << cnt << endl;
  return 0;
}

