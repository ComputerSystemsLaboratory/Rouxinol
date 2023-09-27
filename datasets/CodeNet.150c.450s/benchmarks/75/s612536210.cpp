#include <iostream>
#include <stdio.h>

#define NODE_MAX 500000
#define KEY_MAX 2000000000
#define KEY_MIN -KEY_MAX
#define NIL KEY_MIN-10000

using namespace std;

int left(int n, int i) {
  int l = i*2;
  if(l > n) return 0;
  return l;
}

int right(int n, int i) {
  int r = i*2+1;
  if(r > n) return 0;
  return r;
}

void maxHeapify(int a[], int n, int i) {
  int l = left(n, i);
  int r = right(n, i);
  int largest = i;
  if(l != 0 && a[l] > a[largest]) largest = l;
  if(r != 0 && a[r] > a[largest]) largest = r;

  if(largest != i) {
    int tmp = a[i];
    a[i] = a[largest];
    a[largest] = tmp;
    maxHeapify(a, n, largest);
  }
}

int max(int x, int y) {
  if(x>y) return x;
  return y;
}

int _height(int a[], int n, int i, int h) {
  int l = left(n, i);
  int lh = 0;
  if(l != 0 && a[l] != NIL) {
    lh = _height(a, n, l, h+1);
  }

  int r = right(n, i);
  int rh = 0;
  if(r != 0 && a[r] != NIL) {
    rh = _height(a, n, r, h+1);
  }

  return max(max(h, lh), rh);
}

int height(int a[], int n) {
  return _height(a, n, 1, 1);
}

void buildMaxHeap(int a[], int n) {
  for(int i=n/2; i>=1; i--) {
    maxHeapify(a, n, i);
  }
}

int main() {
  int a[NODE_MAX];
  for(int i=1; i<=NODE_MAX; i++) {
    a[i] = NIL;
  }

  int n;
  cin >> n;
  for(int i=1; i<=n; i++) {
    cin >> a[i];
  }

  buildMaxHeap(a, n);

  for(int i=1; i<=n; i++) {
    cout << " " << a[i];
  }
  cout << endl;
}