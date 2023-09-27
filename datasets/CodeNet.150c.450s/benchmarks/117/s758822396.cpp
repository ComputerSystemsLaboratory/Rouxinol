#include <algorithm>
#include <complex>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <deque>
#include <iostream>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <vector>
using namespace std;
typedef long long unsigned int ll;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))

#define MAX 500000

int L[MAX / 2 + 2], R[MAX / 2 + 2];
int cnt;

void merge(int A[], int n, int left, int mid, int right) {
  int n1 = mid - left;
  int n2 = right - mid;
  // std::cout << "left: " << left << " right: " << right << '\n';
  for (int i = 0; i < n1; i++) {
    L[i] = A[left + i];
  }
  for (int i = 0; i < n2; i++) {
    R[i] = A[mid + i];
  }
  L[n1] = R[n2] = INF;
  int i = 0, j = 0;
  for (int k = left; k < right; k++) {
    cnt++;
    if (L[i] <= R[j]) {
      A[k] = L[i++];
    } else {
      A[k] = R[j++];
    }
  }
}

void mergeSort(int A[], int n, int left, int right) {
  if (left + 1 < right) {
    int mid = (left + right) / 2;
    mergeSort(A, n, left, mid);
    mergeSort(A, n, mid, right);
    merge(A, n, left, mid, right);
  }
  return;
}

int main(int argc, char const *argv[]) {
  int A[MAX], n, i;
  cnt = 0;

  std::cin >> n;

  for (int i = 0; i < n; i++) {
    std::cin >> A[i];
  }

  mergeSort(A, n, 0, n);

  for (int i = 0; i < n; i++) {
    if (i) {
      std::cout << " ";
    }
    std::cout << A[i];
  }
  std::cout << '\n';

  std::cout << cnt << '\n';
  return 0;
}

