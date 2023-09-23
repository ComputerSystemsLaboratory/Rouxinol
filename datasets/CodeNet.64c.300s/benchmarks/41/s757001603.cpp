#include <iostream>
using namespace std;

const int MAX = 500000;
int A[MAX + 1];
int H;

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

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  cin >> H;

  for (int i = 1; i <= H; i++) cin >> A[i];

  for (int i = H / 2; i >= 1; i--) maxHeapify(i);

  for (int i = 1; i <= H; i++) cout << " " << A[i];
  cout << endl;

  return 0;
}