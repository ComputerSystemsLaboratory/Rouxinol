#include<iostream>
using namespace std;

const int N = 200000;
const int INFTY = 1000000001;
long long cnt;

void merge(int left, int mid, int right, int A[]) {
  int i, j, k, n1, n2, *L, *R;
  
  n1 = mid - left;
  n2 = right - mid;
  L = new int[n1+1];
  R = new int[n2+1];

  for (i = 0; i < n1; i++) L[i] = A[left+i];
  for (i = 0; i < n2; i++) R[i] = A[mid+i];
  L[n1] = R[n2] = INFTY;

  j = k = 0;
  for (i = left; i < right; i++) {
    if (L[j] <= R[k]) {
      A[i] = L[j++];
    } else {
      A[i] = R[k++];
      cnt += n1 - j;
    }
  }

  delete [] L;
  delete [] R;
}

void merge_sort(int left, int right, int A[]) {
  if (left + 1 < right) {
    int mid = (left + right) / 2;
    merge_sort(left, mid, A);
    merge_sort(mid, right, A);
    merge(left, mid, right, A);
  }
}
  

int main() {
  int n;
  int A[N];

  cin >> n;
  for (int i = 0; i < n; i++) cin >> A[i];

  cnt = 0;
  merge_sort(0, n, A);

  cout << cnt << endl;

  return 0;
}

