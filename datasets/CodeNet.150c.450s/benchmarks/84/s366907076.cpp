#include <bits/stdc++.h>
using namespace std;
typedef long long llong;

llong Merge(int* array, int left, int mid, int right) {
  int n1 = mid - left;
  int n2 = right - mid;
  int array_l[n1 + 1];
  int array_r[n2 + 1];
  for (int i = 0; i < n1; i++) {
    array_l[i] = array[left + i];
  }
  for (int i = 0; i < n2; i++) {
    array_r[i] = array[mid + i];
  }
  array_l[n1] = INT_MAX;
  array_r[n2] = INT_MAX;
  int i = 0;
  int j = 0;
  llong cnt = 0;
  for (int k = left; k < right; k++) {
    if (array_l[i] <= array_r[j]) {
      array[k] = array_l[i];
      i = i + 1;
    } else {
      array[k] = array_r[j];
      j = j + 1;
      cnt += n1 - i;
    }
  }
  return cnt;
}

llong MergeSort(int* array, int left, int right) {
  llong cnt = 0;
  if (left + 1 < right) {
    int mid = (left + right) / 2;
    cnt += MergeSort(array, left, mid);
    cnt += MergeSort(array, mid, right);
    cnt += Merge(array, left, mid, right);
  }
  return cnt;
}

int main() {
  int n;
  cin >> n;
  int array[n];
  for (int i = 0; i < n; i++) {
    cin >> array[i];
  }
  llong cnt = MergeSort(array, 0, n);
  cout << cnt << endl;
  return 0;
}
