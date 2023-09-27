#include <iostream>
using namespace std;

const int MAX = 500000;
int A[MAX];

void maxHeapify(int a[], int h, int i) {
  int right_id = 2 * i + 1;
  int left_id = 2 * i;
  int largest_id = i;

  if (right_id <= h) {
    int right_key = a[right_id];
    if (right_key <= a[i]) {
      largest_id = i;
    } else {
      largest_id = right_id;
    }
  }

  if (left_id <= h) {
    int left_key = a[left_id];
    if (left_key > a[largest_id]) {
      largest_id = left_id;
    }
  }
  if (largest_id != i) {
    int tmp = a[i];
    a[i] = a[largest_id];
    a[largest_id] = tmp;
    maxHeapify(A, h, largest_id);
  }
}

void buildHeap(int a[], int h) {
  for (int i = h / 2; i >= 1; i--) {
    maxHeapify(a, h, i);
  }
}

int main() {
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++) cin >> A[i];

  buildHeap(A, n);
  for (int i = 1; i <= n; i++) cout << " " << A[i];
  cout << endl;
}

