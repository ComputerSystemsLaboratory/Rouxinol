#include <iostream>
using namespace std;

struct Card{
  char c;
  int n;
};

bool IsStable(Card A1[], Card A2[],int n) {
  for (int i = 0; i < n; i++) if (A1[i].c != A2[i].c) return false;
  return true;
}

void Marge(Card A[], int left, int mid, int right) {
  int n1 = mid - left;
  int n2 = right - mid;

  static Card L[100001], R[100001];
  for (int i = 0; i < n1; i++) L[i] = A[left + i];
  for (int i = 0; i < n2; i++) R[i] = A[mid + i];
  L[n1].n = 1000000001; R[n2].n = 1000000001;

  int i = 0, j = 0;
  for (int k = left; k < right; k++) {
    if (L[i].n <= R[j].n) {
      A[k] = L[i];
      i++;
    } else {
      A[k] = R[j];
      j++;
    }
  }
}

void MargeSort(Card A[], int left, int right) {
  if (left + 1 < right) {
    int mid = (left + right) / 2;
    MargeSort(A, left, mid);
    MargeSort(A, mid, right);
    Marge(A, left, mid, right);
  }
}

int Partition(Card A[], int p, int r) {
  int x = A[r].n;
  int i = p - 1;

  for (int j = p; j < r; j++) {
    if (A[j].n <= x) {
      i++;
      Card swap = A[i]; A[i] = A[j]; A[j] = swap;
    }
  }
  Card swap = A[i + 1]; A[i + 1] = A[r]; A[r] = swap;

  return i + 1;
}

void QuickSort(Card A[], int p, int r) {
  if (p < r) {
    int q = Partition(A, p, r);
    QuickSort(A, p, q - 1);
    QuickSort(A, q + 1, r);
  }
}

int main() {
  int n; cin >> n;
  static Card A1[100000], A2[100000]; for (int i = 0; i < n; i++) cin >> A1[i].c >> A1[i].n;
  for (int i = 0; i < n; i++) A2[i] = A1[i];

  QuickSort(A1, 0, n - 1);
  MargeSort(A2, 0, n);

  bool s = IsStable(A1, A2, n);

  if (s) cout << "Stable" << endl;
  else cout << "Not stable" << endl;

  for (int i = 0; i < n; i++) cout << A1[i].c << " " << A1[i].n << endl;

  return 0;
}
