#include <algorithm>
#include <iostream>
#include <limits>
using namespace std;

long H = 0;
long A[2000000];

void maxHeapify(long i) {
  long largest;
  long l = 2*i;
  long r = 2*i+1;

  if (l <= H && A[l] > A[i]) largest = l;
  else largest = i;

  if (r <= H && A[r] > A[largest]) largest = r;

  if (largest != i) {
    swap(A[i], A[largest]);
    maxHeapify(largest);
  }
}

long extractMax() {
  long c_max = A[1];
  swap(A[1], A[H]);
  H--;
  maxHeapify(1);
  return c_max;
}

void insert(long k) {
  A[++H] = k;
  long i = H;
  while (i > 1 && A[i/2] < A[i]) {
    swap(A[i/2], A[i]);
    i /= 2;
  }
}

int main() {
  string op; cin >> op;

  while (op != "end") {
    if (op[0] == 'i') {
      long k; cin >> k;
      insert(k);
    } else {
      cout << extractMax() << endl;
    }
    cin >> op;
  } 

  return 0;
}