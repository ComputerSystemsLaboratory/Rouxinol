#include <iostream>
#include <string>
#define MAX 100000
using namespace std;

struct Card {
  char suit;
  int value;
};

Card L[MAX / 2 + 1];
Card R[MAX / 2 + 1];

void merge(Card *C, int left, int mid, int right) {
  int i,j,k;

  int n1 = mid - left;
  int n2 = right - mid;

  for (i = 0; i < n1; i++) {
    L[i] = C[left + i];
  }

  for (i = 0; i < n2; i++) {
    R[i] = C[mid + i];
  }
  L[n1].value = 1000000001;
  R[n2].value = 1000000001;

  i = 0;
  j = 0;
  for (k = left; k < right; k++) {
    if (L[i].value <= R[j].value) {
      C[k] = L[i];
      i++;
    } else {
      C[k] = R[j];
      j++;
    }
  }
}

void mergeSort(Card *C, int left, int right) {
  if (left + 1 < right) {
    int mid = (left + right) / 2;
    mergeSort(C, left, mid);
    mergeSort(C, mid, right);
    merge(C, left, mid, right);
  }
}

int partition(Card *C, int p, int r) {
  int x = C[r].value;
  int i = p - 1;
  Card tmp;
  for (int j = p; j < r; j++) {
    if (C[j].value <= x) {
      i++;
      tmp = C[i]; C[i] = C[j]; C[j] = tmp;
    }
  }
  i++;
  tmp = C[i]; C[i] = C[r]; C[r] = tmp;
  return i;
}

void quickSort(Card *C, int p, int r) {
  if (p < r) {
    int q = partition(C, p, r);
    quickSort(C, p, q - 1);
    quickSort(C, q + 1, r);
  }
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n, q;
  cin >> n;

  Card A[MAX];
  Card B[MAX];
  for (int i = 0; i < n; i++) {
    cin >> A[i].suit >> A[i].value;
    B[i].suit = A[i].suit;
    B[i].value = A[i].value;
  }

  quickSort(A, 0, n - 1);
  mergeSort(B, 0, n);

  bool stable = true;
  for (int i = 0; i < n; i++) {
    if (A[i].suit != B[i].suit) {
      stable = false;
      break;
    }
  }

  if (stable) {
    cout << "Stable";
  } else {
    cout << "Not stable";
  }
  cout << endl;

  for (int i = 0; i < n; i++) {
    cout << A[i].suit << " " << A[i].value << endl;
  }

  return 0;
}