#include <bits/stdc++.h>
using namespace std;

const int inf = 1e9 + 7;

int partition(vector<pair<char, int>>& A, int p, int r) {
  int x = A[r].second;
  int i = p - 1;
  for (int j = p; j < r; j++) {
    if (A[j].second <= x) {
      i++;
      int tmp = A[j].second;
      char tmpch = A[j].first;
      A[j].second = A[i].second;
      A[j].first = A[i].first;
      A[i].second = tmp;
      A[i].first = tmpch;
    }
  }
  int tmp = A[i + 1].second;
  char tmpch = A[i + 1].first;
  A[i + 1].second = A[r].second;
  A[i + 1].first = A[r].first;
  A[r].second = tmp;
  A[r].first = tmpch;
  return i + 1;
};

void quickSort(vector<pair<char, int>>& A, int p, int r) {
  if (p < r) {
    int q = partition(A, p, r);
    quickSort(A, p, q - 1);
    quickSort(A, q + 1, r);
  };
};

void merge(vector<pair<char, int>>& A, int left, int mid, int right) {
  int n1 = mid - left;
  int n2 = right - mid;
  vector<pair<char, int>> L(n1 + 1);
  vector<pair<char, int>> R(n2 + 1);
  for (int i = 0; i < n1; i++) {
    L[i] = A[left + i];
  }
  L[n1].second = inf;
  for (int i = 0; i < n2; i++) {
    R[i] = A[mid + i];
  }
  R[n2].second = inf;
  int i = 0;
  int j = 0;
  for (int k = left; k < right; k++) {
    if (L[i].second <= R[j].second) {
      A[k] = L[i];
      i++;
    } else {
      A[k] = R[j];
      j++;
    }
  }
};

void mergeSort(vector<pair<char, int>>& A, int left, int right) {
  if (right - left > 1) {
    int mid = (left + right) / 2;
    mergeSort(A, left, mid);
    mergeSort(A, mid, right);
    merge(A, left, mid, right);
  }
}

int main() {
  int n;
  cin >> n;
  vector<pair<char, int>> A(n);
  vector<pair<char, int>> B(n);
  for (int i = 0; i < n; i++) {
    cin >> A[i].first >> A[i].second;
    B[i].first = A[i].first;
    B[i].second = A[i].second;
  }
  quickSort(A, 0, n - 1);
  mergeSort(B, 0, n);
  bool isStable = true;
  for (int i = 0; i < n; i++) {
    if (A[i].first != B[i].first) {
      isStable = false;
      break;
    }
  }
  if (isStable) cout << "Stable" << endl;
  else cout << "Not stable" << endl;
  for (int i = 0; i < n; i++) {
    cout << A[i].first << ' ' << A[i].second << endl;
  }
};

