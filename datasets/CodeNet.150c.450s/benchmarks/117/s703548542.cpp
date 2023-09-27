#include <iostream>
#include <algorithm>
#define INF 2000000000
using namespace std;

int count_comp;

void merge(int a[], int left, int mid, int right) {
  int n1 = mid - left;
  int n2 = right - mid;
  
  int l[n1 + 1], r[n2 + 1];
  for (int i = 0; i < n1; i++) {
    l[i] = a[left + i];
  }
  l[n1] = INF;
  for (int i = 0; i < n2; i++) {
    r[i] = a[mid + i];
  }
  r[n2] = INF;

  int p = 0, q = 0;
  for (int i = left; i < right; i++) {
    count_comp++;
    if (l[p] < r[q]) {
      a[i] = l[p++];
    } else {
      a[i] = r[q++];
    }
  }
}

void mergeSort(int a[], int left, int right) {
  if (left + 1 == right) return;
  int mid = (left + right) / 2;
  mergeSort(a, left, mid);
  mergeSort(a, mid, right);
  merge(a, left, mid, right);
}

int main() {
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  count_comp = 0;
  mergeSort(a, 0, n);

  cout << a[0];
  for (int i = 1; i < n; i++) {
    cout << ' ' << a[i];
  }
  cout << endl;
  cout << count_comp << endl;

  return 0;
}