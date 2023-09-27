#include <iostream>
using namespace std;

const int INFTY = (1 << 30);
const int MAX = 200005;

long long merge(int A[], int n, int left, int mid, int right) {
  long long num_inversions {0};

  // define L, R
  int n1 = mid - left;
  int n2 = right - mid;
  int L[n1+1], R[n2+1];
  for (int i = 0; i < n1; i++) L[i] = A[left + i];
  for (int i = 0; i < n2; i++) R[i] = A[mid + i];
  L[n1] = R[n2] = INFTY;

  // merge
  int l_i {0}, r_i {0};
  for (int i = left; i < right; i++) {
    if (L[l_i] <= R[r_i]) {
      A[i] = L[l_i];
      l_i++;
    } else {
      A[i] = R[r_i];
      r_i++;
      num_inversions += (n1 - l_i);
    }
  }
  return num_inversions;
}

long long mergeSort(int A[], int n, int left, int right) {
  int mid {0};
  long long num1, num2, num3;
  if (left + 1 < right) {
    mid = (left + right) / 2;
    num1 = mergeSort(A, n, left, mid);
    num2 = mergeSort(A, n, mid, right);
    num3 = merge(A, n, left, mid, right);
    return num1 + num2 + num3;
  } else {
    return 0;
  }
}

int main() {
  // input
  int n;
  cin >> n;
  int A[MAX];
  for (int i = 0; i < n; i++) cin >> A[i];

  // main part
  long long ans = mergeSort(A, n, 0, n);
  cout << ans << endl;
  return 0;
}

