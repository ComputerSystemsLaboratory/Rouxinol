#include <iostream>
#include <cassert>
#include <queue>
#include <algorithm>

#define INF 922337203685477580
typedef long long ll;

using namespace std;

ll cnt = 0LL;

void merge(ll* A, int left, int mid, int right) {
  int n1 = mid - left;
  int n2 = right - mid;
  ll L[n1 + 10];
  ll R[n2 + 10];

  for (int i = 0; i < n1; i++) {
    L[i] = A[left + i];
  }
  for (int i = 0; i < n2; i++) {
    R[i] = A[mid + i];
  }
  L[n1] = INF;
  R[n2] = INF;

  int i = 0;
  int j = 0;
  for (int k = left; k < right; k++) {
    if (L[i] <= R[j]) {
      A[k] = L[i];
      i++;
    } else {
      A[k] = R[j];
      cnt += n1 - i;
      j++;
    }
  }
}

void mergeSort(ll* A, int left, int right) {
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

  ll A[n];
  for (int i = 0; i < n; i++) {
    cin >> A[i];
  }


  mergeSort(A, 0, n);

  cout << cnt << endl;
  return 0;
}