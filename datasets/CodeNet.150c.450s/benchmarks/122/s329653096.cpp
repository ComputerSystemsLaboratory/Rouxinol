#include <iostream>
#include <string>
using namespace std;

const int MAX = 2000000;
int A[MAX + 1];
int H = 0;

void maxHeapify(int i) {
  int largest;
  int l = i * 2;
  int r = i * 2 + 1;

  if (l <= H && A[l] > A[i]) {
    largest = l;
  } else {
    largest = i;
  }
  if (r <= H && A[r] > A[largest]) largest = r;

  if (largest != i) {
    swap(A[i], A[largest]);
    maxHeapify(largest);
  }
}

void insert(int k) {
  H++;
  A[H] = k;
  int i = H;
  while (i > 1 && A[i / 2] < A[i]) {
    swap(A[i / 2], A[i]);
    i = i / 2;
  }
}

int extract() {
  int r = A[1];
  swap(A[1], A[H]);
  H--;
  maxHeapify(1);
  return r;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  string command;
  int k;
  while (1) {
    cin >> command;
    if (command[0] == 'i') {
      // insert
      cin >> k;
      insert(k);
    } else if (command[1] == 'x') {
      // extract
      cout << extract() << endl;
    } else if (command[1] == 'n') {
      // end
      break;
    }
  }

  return 0;
}