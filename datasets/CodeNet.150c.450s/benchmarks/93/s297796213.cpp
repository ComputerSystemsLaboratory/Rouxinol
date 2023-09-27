#include <iostream>
#include <utility>
using namespace std;

const int INFTY = (1 << 30);

int partition(pair<char, int> A[], int left, int right) {
  auto x = A[right];
  int i = left - 1;
  for (int j = left; j < right; j++) {
    if (A[j].second <= x.second) {
      i++;
      auto tmp = A[j];
      A[j] = A[i];
      A[i] = tmp;
    }
  }
  A[right] = A[i+1];
  A[i+1] = x;

  return i + 1;
}

void quickSort(pair<char, int> A[], int left, int right) {
  if (left < right) {
    int q = partition(A, left, right);
    quickSort(A, left, q-1);
    quickSort(A, q+1, right);
  }
}

void merge(pair<char, int> A[], int left, int mid, int right) {
  int n1 = mid - left;
  int n2 = right - mid;
  pair<char, int> L[n1+1], R[n2+1];
  for (int i = 0; i < n1; i++) L[i] = A[left + i];
  for (int i = 0; i < n2; i++) R[i] = A[mid + i];

  L[n1] = make_pair('Z', INFTY);
  R[n2] = make_pair('Z', INFTY);
  int l_i {0}, r_i {0};

  for (int i = left; i < right; i++) {
    if (L[l_i].second <= R[r_i].second) {
      A[i] = L[l_i];
      l_i++;
    } else {
      A[i] = R[r_i];
      r_i++;
    }
  }
}

void mergeSort(pair<char, int> A[], int left, int right) {
  if (left + 1 < right) {
    int mid = (left + right) / 2;
    mergeSort(A, left, mid);
    mergeSort(A, mid, right);
    merge(A, left, mid, right);
  }
}

int main() {
  int n;
  cin >> n;
  pair<char, int> A[n], B[n];
  int tmp_i;
  char tmp_c;
  for (int i = 0; i < n; i++) {
    cin >> tmp_c >> tmp_i;
    A[i] = make_pair(tmp_c, tmp_i);
    B[i] = A[i];
  }

  quickSort(A, 0, n-1);
  mergeSort(B, 0, n);

  bool is_stable = true;
  for (int i = 0; i < n; i++) {
    if (A[i].first != B[i].first) {
      is_stable = false;
      break;
    }
  }

  if (is_stable) {
    cout << "Stable" << endl;
  } else {
    cout << "Not stable" << endl;
  }

  for (int i = 0; i < n; i++) {
    cout << A[i].first << " " << A[i].second << endl;
  }
  return 0;
}

