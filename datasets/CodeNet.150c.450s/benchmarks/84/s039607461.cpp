#include <bits/stdc++.h>
using namespace std;

auto merge(vector<int> &A, int left, int mid, int right) {
  int nl = mid - left, nr = right - mid;
  vector<int> L(nl + 1), R(nr + 1);
  L[nl] = INT_MAX;
  R[nr] = INT_MAX;
  copy(A.begin() + left, A.begin() + mid, L.begin());
  copy(A.begin() + mid, A.begin() + right, R.begin());

  int il = 0, ir = 0;
  long cnt = 0;
  for (int c = left; c < right; c++) {
    if (L[il] > R[ir]) {
      A[il + ir + left] = R[ir];
      cnt += nl - il;
      ir++;
    } else {
      A[il + ir + left] = L[il];
      il++;
    }
  }
  return cnt;
}

auto mergeSort(vector<int> &A, int left, int right) {
  if ((right - left) <= 1) return 0L;
  int mid = (left + right) / 2;
  auto L_cnt = mergeSort(A, left, mid);
  auto R_cnt = mergeSort(A, mid, right);
  auto merged_cnt = merge(A, left, mid, right);
  return L_cnt + R_cnt + merged_cnt;
}
int main() {
  int n, CNT = 0;
  cin >> n;
  vector<int> A(n);
  for (size_t i = 0; i < n; i++) {
    cin >> A[i];
  }

  cout << mergeSort(A, 0, n) << endl;
}
