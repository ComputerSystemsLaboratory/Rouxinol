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

#define MAX 100000

int A[MAX], n;

int partition(int p, int r) {
  int x = A[r]; // partition number
  int i = p - 1;

  for (size_t j = p; j < r; j++) {
    if (A[j] <= x) {
      i++;
      swap(A[i], A[j]);
    }
  }
  swap(A[i + 1], A[r]);
  return i + 1;
}

int main(int argc, char const *argv[]) {
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> A[i];
  }

  int partition_number = partition(0, n - 1);

  for (int i = 0; i < n; i++) {
    if (i)
      cout << " ";
    if (i == partition_number) {
      cout << "[" << A[i] << "]";
    } else {
      std::cout << A[i];
    }
  }
  std::cout << '\n';

  return 0;
}

