#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cmath>

using namespace std;

int n;

void maxHeapify (int H[], int i) {
  int l = i * 2;
  int r = i * 2 + 1;
  int largest;

  if (l <= n && H[i] < H[l])
    largest = l;
  else
    largest = i;
  if (r <= n && H[i] < H[r])
    largest = H[r] > H[l] ? r : l;

  // cout << i << " " << largest << endl;

  if (largest != i) {
    swap(H[i], H[largest]);
    maxHeapify(H, largest);
  }
}

void buildMaxHeap (int H[]) {
  for (int i = n / 2; i >= 1; i--)
    maxHeapify(H, i);
}

int main () {
  int H[500002];

  cin >> n;

  for (int i = 1; i <= n; i++) {
    cin >> H[i];
  }

  buildMaxHeap(H);
  // maxHeapify(H, 3);
  // maxHeapify(H, 2);
  // maxHeapify(H, 1);

  for (int i = 1; i <= n; i++) {
    cout << " " << H[i];
  }

  cout << endl;

  return 0;
}

