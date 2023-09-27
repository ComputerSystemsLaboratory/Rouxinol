#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n;
int left(int i) {
  return 2*i;
}
int right(int i) {
  return 2*i+1;
}
void maxHeapify(vector<int> &A, int i) {
  int l = left(i);
  int r = right(i);
  int largest = i;
  // A[largest] = max(A[i],A[l],A[r])
  if(l <= n) {
    if(A[l] > A[i])
      largest = l;
  }
  if(r <= n) {
    if(A[r] > A[largest])
      largest = r;
  }

  if(largest != i) {
    swap(A[i],A[largest]);
    // for leaf...
    maxHeapify(A,largest);
  }
}
void buildMaxHeap(vector<int> &A) {
  for(int i=n/2;i>=1;i--) {
    maxHeapify(A,i);
  }
}
int main() {
  cin >> n;
  vector<int> heaps(n+1);
  for(int i=1;i<=n;i++) {
    cin >> heaps[i];
  }
  buildMaxHeap(heaps);
  for(int i=1;i<=n;i++) {
    cout << " " << heaps[i];
  }
  cout << endl;
}