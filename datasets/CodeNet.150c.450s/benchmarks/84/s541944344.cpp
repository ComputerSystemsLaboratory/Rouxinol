#include <iostream>
#include <limits>
using namespace std;

const long NUM = 500000;
long n, S[NUM], c = 0;

void merge(long A[], long left, long mid, long right) {
  long L[NUM/2+2], R[NUM/2+2], n1 = mid - left, n2 = right - mid;

  for (int i = 0; i < n1; i++)
    L[i] = A[left+i];
  for (int i = 0; i < n2; i++)
    R[i] = A[mid+i];

  L[n1] = R[n2] = numeric_limits<long>::max();

  long i = 0, j = 0;

  for (long k = left; k < right; k++) {
    if (L[i] <= R[j]) A[k] = L[i++];
    else {
      A[k] = R[j++];
      c += n1 - i;
    }
  }
}

void mergeSort(long A[], long left, long right) {
  if (left+1 < right) {
    long mid = (left+right)/2;
    mergeSort(A, left, mid);
    mergeSort(A, mid, right);
    merge(A, left, mid, right);
  }
}

int main() {
  cin >> n;
  for (long i = 0; i < n; i++)
    cin >> S[i];

  mergeSort(S, 0, n);

  cout << c << endl;
  return 0;
}