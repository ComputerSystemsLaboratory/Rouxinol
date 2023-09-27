#include <iostream>
#define INF 2000000000
using namespace std;

typedef pair<char, int> P;

bool equals(P b[], P c[], int n) {
  for (int i = 0; i < n; i++) {
    if (b[i].first != c[i].first) return false;
    if (b[i].second != c[i].second) return false;
  }
  return true;
}

void merge(P a[], int left, int mid, int right) {
  int n1 = mid - left;
  int n2 = right - mid;
  
  P l[n1 + 1], r[n2 + 1];
  for (int i = 0; i < n1; i++) {
    l[i] = a[left + i];
  }
  l[n1].second = INF;
  for (int i = 0; i < n2; i++) {
    r[i] = a[mid + i];
  }
  r[n2].second = INF;

  int p = 0, q = 0;
  for (int i = left; i < right; i++) {
    if (l[p].second <= r[q].second) {
      a[i] = l[p++];
    } else {
      a[i] = r[q++];
    }
  }
}

void mergeSort(P a[], int left, int right) {
  if (left + 1 == right) return;
  int mid = (left + right) / 2;
  mergeSort(a, left, mid);
  mergeSort(a, mid, right);
  merge(a, left, mid, right);
}

int partition(P a[], int p, int r) {
  int x = a[r].second;
  int i = p - 1;
  for (int j = p; j < r; j++) {
    if (a[j].second <= x) {
      i++;
      P temp = a[i];
      a[i] = a[j];
      a[j] = temp;
    }
  }

  P temp = a[i + 1];
  a[i + 1] = a[r];
  a[r] = temp;
  return i + 1;
}

void quicksort(P a[], int p, int r) {
  if (p >= r) return;
  int q = partition(a, p, r);
  quicksort(a, p, q - 1);
  quicksort(a, q + 1, r);
}

int main() {
  int n;
  cin >> n;
  P a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i].first >> a[i].second;
  }

  P b[n], c[n];
  for (int i = 0; i < n; i++) {
    b[i] = a[i];
    c[i] = a[i];
  }

  quicksort(b, 0, n - 1);
  mergeSort(c, 0, n);

  if (equals(b, c, n)) cout << "Stable" << endl;
  else cout << "Not stable" << endl;

  for (int i = 0; i < n; i++) {
    cout << b[i].first << ' ' << b[i].second << endl;
  }

  return 0;
}