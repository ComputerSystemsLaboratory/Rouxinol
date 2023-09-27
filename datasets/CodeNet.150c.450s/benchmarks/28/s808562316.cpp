#include <iostream>
#include <vector>

//#include <cstdio>

using namespace std;

static int inputArray(int A[], int num) {
  int max = 0;
  for (int i = 0; i < num; i++) {
    cin >> A[i];
    if (A[i] > max) {
      max = A[i];
    } 
  }
  return max;
}

static inline int f(int A[], int num, uint64_t P, int k) {
    int i = 0, v = 0;
    for (uint64_t total = 0; (v < k) && (i < num); i++) {
      total += A[i];
      if (total > P) {
        total = 0;
        i--;
        v++;
      }
    }
    return i;
}

int main() {
  int n, k;
  cin >> n >> k;

  vector<int> w(n);
  uint64_t P = inputArray(&w[0], n);

  uint64_t left = 0;
  uint64_t mid;
  uint64_t right = 100000 * 10000;
  int v = 0;
  while (1 < right - left) {
    mid = (left + right) / 2;
    v = f(&w[0], n, mid, k);
    if (v >= n) {
      right = mid;
    } else {
      left = mid;
    }
  }

  cout << right << endl;

  return 0;
}

