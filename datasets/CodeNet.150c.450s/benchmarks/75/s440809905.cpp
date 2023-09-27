#include <algorithm>
#include <iostream>
using namespace std;

int H;
long A[500001];

void maxHeapify(int i) {
  int largest;
  int l = 2*i;
  int r = 2*i+1;

  if (l <= H && A[l] > A[i]) largest = l;
  else largest = i;

  if (r <= H && A[r] > A[largest]) largest = r;

  if (largest != i) {
    swap(A[i], A[largest]);
    maxHeapify(largest);
  }
}

void buildMaxHeap() {
  for (int i = H/2; i > 0; i--)
    maxHeapify(i);
}

int main() {
  cin >> H;
  for (int i = 1; i <= H; i++)
    cin >> A[i];

  buildMaxHeap();

  for (int i = 1; i <= H; i++)
    cout << ' ' << A[i];
  cout << endl;

  return 0;
}