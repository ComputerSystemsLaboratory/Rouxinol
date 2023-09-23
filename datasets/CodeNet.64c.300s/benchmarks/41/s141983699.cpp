
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;

int parent(int i) { return i/2; }
int left(int i) { return i*2; }
int right(int i) { return i*2+1; }

void maxHeapify(int A[], int i, int n) {
  int l = left(i);
  int r = right(i);
  int largest;

  if (l <= n && A[l] > A[i]) largest = l;
  else largest = i;
  if (r <= n && A[r] > A[largest]) largest = r;

  if (largest != i) {
    swap(A[i], A[largest]);
    maxHeapify(A, largest, n);
  }
}

void buildMaxHeap(int A[], int n) {
  for(int i = n/2; i > 0; i --) {
    maxHeapify(A, i, n);
  }
}

int main() {
  int n;cin>>n;
  int A[n+1];
  for(int i = 1; i < n+1; i++) {
    cin >> A[i];
  }

  buildMaxHeap(A, n);
  for(int i = 1; i < n+1; i++) {
    cout << " " << A[i];
  }
  cout << endl;

  return 0;
}

