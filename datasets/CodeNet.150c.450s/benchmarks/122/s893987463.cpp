#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

#define MAX 2000000
#define INFTY (1 << 30)

int H, A[MAX + 1];

void maxHeapify(int i) {
  int left, right, largest;
  left = 2 * i;
  right = 2 * i + 1;

  if (left <= H && A[left] > A[i]) {
    largest = left;
  } else {
    largest = i;
  }

  if (right <= H && A[right] > A[largest]) {
    largest = right;
  }

  if (largest != i) {
    swap(A[i], A[largest]);
    maxHeapify(largest);
  }
}

int extract() {
  if (H < 1) {
    return -INFTY;
  }
  int maxv = A[1];
  A[1] = A[H--];
  maxHeapify(1);
  return maxv;
}

void increaseKey(int i, int key) {
  if (key < A[i]) {
    return;
  }
  A[i] = key;
  while (i > 1 && A[i / 2] < A[i]) {
    swap(A[i], A[i / 2]);
    i = i / 2;
  }
}

void insert(int key) {
  H++;
  A[H] = -INFTY;
  increaseKey(H, key);
}

int main() {
  string com;
  int key;

  while (1) {
    cin >> com;
    if (com == "end") {
      break;
    } else if (com == "insert") {
      cin >> key;
      insert(key);
    } else {
      cout << extract() << endl;
    }
  }

  return 0;
}
