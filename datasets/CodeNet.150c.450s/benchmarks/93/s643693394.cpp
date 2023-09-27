#include <iostream>
#include <limits>
using namespace std;

const int NUM = 100000;

typedef pair<char, int> card;
card L[NUM/2+2], R[NUM/2+2];

void merge(card A[], int l, int m, int r) {
  int n1 = m - l, n2 = r - m;

  for (int i = 0; i < n1; i++)
    L[i] = A[l+i];
  for (int i = 0; i < n2; i++)
    R[i] = A[m+i];

  L[n1] = R[n2] = card('X', numeric_limits<int>::max());

  int i = 0, j = 0;

  for (int k = l; k < r; k++) {
    if (L[i].second <= R[j].second) A[k] = L[i++];
    else A[k] = R[j++];
  }
}

void mergeSort(card A[], int l, int r) {
  if (l+1 < r) {
    int m = (l+r)/2;
    mergeSort(A, l, m);
    mergeSort(A, m, r);
    merge(A, l, m, r);
  }
}

int partition(card A[], int p, int r) {
  int x = A[r-1].second;
  int i = p - 1;
  for (int j = p; j < r-1; j++) {
    if (A[j].second <= x)
      swap(A[++i], A[j]);
  }
  swap(A[i+1], A[r-1]);
  return i+1;
}

void quickSort(card A[], int p, int r) {
  if (p < r) {
    int q = partition(A, p, r);
    quickSort(A, p, q);
    quickSort(A, q+1, r);
  }
}

int main() {
  int n;
  card quick[NUM], merge[NUM];
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> quick[i].first >> quick[i].second;
    merge[i].first = quick[i].first;
    merge[i].second = quick[i].second;
  }

  quickSort(quick, 0, n);
  mergeSort(merge, 0, n);

  bool stable = true;
  for (int i = 0; i < n; i++) {
    if (quick[i] != merge[i]) {
      stable = false;
      break;
    }
  }

  cout << (stable ? "Stable" : "Not stable") << endl;

  for (int i = 0; i < n; i++)
    cout << quick[i].first << ' ' << quick[i].second << endl;

  return 0;
}