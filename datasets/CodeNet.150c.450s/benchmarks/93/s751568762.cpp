#include <iostream>
#include <utility>
using namespace std;

const int MAX = 100000;
pair<int, char> A[MAX];
pair<int, char> B[MAX];
pair<int, char> L[MAX];
pair<int, char> R[MAX];
const int SENTINEL = 2000000000;

void merge(pair<int, char> a[], int left, int mid, int right){
  int n1 = mid - left;
  int n2 = right - mid;

  // create new arrays L, R
  for (int i = 0; i < n1; i++) {
    L[i] = a[left + i];
  }

  for (int i = 0; i < n2; i++) {
    R[i] = a[mid + i];
  }

  // SENTINEL
  L[n1].first = SENTINEL;
  R[n2].first = SENTINEL;

  int i {0}, j {0};
  for (int k = left; k < right; k++) {
    if (L[i].first <= R[j].first) {
      a[k] = L[i];
      i++;
    } else {
      a[k] = R[j];
      j++;
    }
  }
}


void mergeSort(pair<int, char> a[], int left, int right) {
  if ((left + 1) < right) {
    int mid = (right + left) / 2;
    mergeSort(a, left, mid);
    mergeSort(a, mid, right);
    merge(a, left, mid, right);
  }
}

int parition(pair<int, char> a[], int p, int r) {
  int x = a[r].first;
  int i = p - 1;
  pair<int, char> tmp;
  for (int j = p; j < r; j++) {
    if (a[j].first <= x) {
      i++;
      tmp = a[i];
      a[i] = a[j];
      a[j] = tmp;
    }
  }
  tmp = a[r];
  a[r] = a[i+1];
  a[i+1] = tmp;
  return i+1;
}

void quickSort(pair<int, char> a[], int p, int r) {
  if (p < r) {
    int q = parition(a, p, r);
    quickSort(a, p, q-1);
    quickSort(a, q+1, r);
  }
}

int main() {
  int n {0};
  cin >> n;
  int num {0};
  char suit;

  for (int i = 0; i < n; i++) {
    cin >> suit >> num;
    A[i] = make_pair(num, suit);
    B[i] = make_pair(num, suit);
  }
  quickSort(A, 0, n-1);
  mergeSort(B, 0, n);
  bool is_stable = true;
  for (int i = 0; i < n; i++) {
    if (A[i] != B[i]) {
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
    cout << A[i].second << " " << A[i].first << endl;
  }
  return 0;
}

