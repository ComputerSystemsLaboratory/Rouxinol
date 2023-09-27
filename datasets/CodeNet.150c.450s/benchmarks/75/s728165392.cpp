#include <iostream>
#include <algorithm>
#include <vector>
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define repR(i, n) for(int i = (n) - 1; i > -1; i--)
#define rep1(i, n) for(int i = 1; i < (int)(n + 1); i++)
#define rep1R(i, n) for(int i = (n); i > 0; i--)
using namespace std;

int H;
vector<int> A;

int parent(int i) { return i / 2; }
int left(int i) { return 2 * i; }
int right(int i) { return 2 * i + 1; }

void maxHeapify(int i) {
  int l = left(i);
  int r = right(i);

  int largest;
  if (l <= H && A[l] > A[i]) largest = l;
  else largest = i;
  if (r <= H && A[r] > A[largest]) largest = r;

  if (largest != i) {
    swap(A[i], A[largest]);
    maxHeapify(largest);
  }
}

void buildMaxHeap() {
  rep1R(i, H / 2) maxHeapify(i);
}

int main() {
  cin >> H;
  A.resize(H + 1);
  rep1(i, H) cin >> A[i];
  buildMaxHeap();
  rep1(i, H) cout << " " << A[i];
  cout << endl;
  return 0;
}

