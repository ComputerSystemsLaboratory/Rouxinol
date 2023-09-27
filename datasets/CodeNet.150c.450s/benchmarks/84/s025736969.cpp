#include <iostream>
using namespace std;

#define INFTY 1000000001

long long merge(long long A[], long long left, long long mid, long long right)
{
  long long n1 = mid - left, n2 = right - mid;
  long long L[n1 + 1], R[n2 + 1];
  for (long long i = 0; i < n1; i++) {
    L[i] = A[left + i];
  }
  for (long long i = 0; i < n2; i++) {
    R[i] = A[mid + i];
  }
  L[n1] = INFTY;
  R[n2] = INFTY;
  long long i = 0, j = 0, count = 0;
  for (long long k = left, p = (-1) * n1; k < right; k++, p++) {
    if (L[i] < R[j]) {
      A[k] = L[i++];
    } else {
      A[k] = R[j];
      count += j - p;
      j++;
    }
  }
  return count;
}

long long mergeSort(long long A[], long long left, long long right)
{
  long long count = 0;
  if ((left + 1) < right) {
    long long mid = (left + right)/2;
    count += mergeSort(A, left, mid);
    count += mergeSort(A, mid, right);
    count += merge(A, left, mid, right);
  }
  return count;
}

int main() {
  long long n;
  cin >> n;
  long long S[n], count;
  for (long long i = 0; i < n; i++) cin >> S[i];
  count = mergeSort(S, 0, n);
  cout << count << endl;
  return 0;
}