#include <iostream>
#include <vector>
#include <climits>
using namespace std;

struct Card {
  char suit;
  int val;
};

int partition(vector<Card>& A, int p, int r) {
  int x = A[r].val;
  int i = p - 1;
  for (int j = p; j < r; ++j) {
    if (A[j].val <= x) {
      ++i;
      swap(A[i], A[j]);
    }
  }
  swap(A[i + 1], A[r]);
  return i + 1;
}

void quickSort(vector<Card>& A, int p, int r) {
  if (p < r) {
    int q = partition(A, p, r);
    quickSort(A, p, q - 1);
    quickSort(A, q + 1, r);
  }
}

void merge(vector<Card>& A, int left, int mid, int right) {
  int n1 = mid - left;
  int n2 = right - mid;
  vector<Card> L(n1 + 1);
  vector<Card> R(n2 + 1);
  for (int i = 0; i < n1; ++i) L[i] = A[left + i];
  for (int i = 0; i < n2; ++i) R[i] = A[mid + i];
  L[n1].val = R[n2].val = INT_MAX;
  int i = 0, j = 0;
  for (int k = left; k < right; ++k) {
    if (L[i].val <= R[j].val) {
      A[k] = L[i];
      ++i;
    } else {
      A[k] = R[j];
      ++j;
    }
  }
}

void mergeSort(vector<Card>& A, int left, int right) {
  if (left + 1 < right) {
    int mid = (left + right) / 2;
    mergeSort(A, left, mid);
    mergeSort(A, mid, right);
    merge(A, left, mid, right);
  }
}

bool is_stable(const vector<Card>& c1, const vector<Card>& c2) {
  for (size_t i = 0; i < c1.size(); ++i) {
    if (c1[i].suit != c2[i].suit) return false;
  }
  return true;
}

int main() {
  int n;
  cin >> n;
  vector<Card> c(n);
  for (int i = 0; i < n; ++i) cin >> c[i].suit >> c[i].val;
  vector<Card> c1, c2;
  c1 = c2 = c;
  quickSort(c1, 0, n - 1);
  mergeSort(c2, 0, n);
  if (is_stable(c1, c2)) cout << "Stable" << endl;
  else cout << "Not stable" << endl;
  for (int i = 0; i < n; ++i) {
    cout << c1[i].suit << " " << c1[i].val << endl;
  }
}

