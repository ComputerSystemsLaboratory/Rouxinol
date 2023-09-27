#include <bits/stdc++.h>

using namespace std;

#define MAX 500000
#define SENTINEL 2000000000 // 番兵

struct Card {
  char suit;
  int value;
};

struct Card L[MAX / 2 + 2], R[MAX / 2 + 2];

void merge(struct Card A[], int left, int mid, int right) {
  int n1 = mid - left;
  int n2 = right - mid;
  for (int i = 0; i < n1; i++) L[i] = A[left + i];
  for (int i = 0; i < n2; i++) R[i] = A[mid + i];
  L[n1].value = R[n2].value = SENTINEL;
  int i = 0, j = 0;
  for (int k = left; k < right; k++) {
    if (L[i].value <= R[j].value) {
      A[k] = L[i++];
    } else {
      A[k] = R[j++];
    }
  }
}

void mergeSort(struct Card A[], int left, int right) {
  if (left + 1 < right) {
    int mid = (left + right) / 2;
    mergeSort(A, left, mid);
    mergeSort(A, mid, right);
    merge(A, left, mid, right);
  }
}

int partition(struct Card A[], int p, int r) {
  struct Card x = A[r];
  int i = p - 1;
  struct Card tmp;
  for (int j = p; j < r; j++) {
    if (A[j].value <= x.value) {
      i++;
      tmp = A[i]; A[i] = A[j]; A[j] = tmp;
    }
  }
  tmp= A[i + 1]; A[i + 1] = A[r]; A[r] = tmp;
  return i + 1;
}

void quickSort(struct Card A[], int p, int r) {
  if (p < r) {
    int index = partition(A, p, r);
    quickSort(A, p, index - 1);
    quickSort(A, index + 1, r);
  }
}

int main() {
  int n; cin >> n;
  struct Card A[n + 1], B[n + 1];
  for (int i = 0; i < n; i++) {
    struct Card a; cin >> a.suit >> a.value;
    A[i] = a; B[i] = a;
  }
  quickSort(A, 0, n - 1);
  mergeSort(B, 0, n);
  bool flag = 1;
  for (int i = 0; i < n; i++) {
    if (A[i].suit != B[i].suit) flag = 0;
  }
  if (flag) cout << "Stable" << endl;
  else cout << "Not stable" << endl;
  for (int i = 0; i < n; i++) {
    cout << A[i].suit << " " << A[i].value << endl;
  }

  return 0;
}

