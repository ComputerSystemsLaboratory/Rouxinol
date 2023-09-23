#include<iostream>
#define MAX 500000
#define NIL -1
using namespace std;

int H[MAX];

void print(int n) {
  for (int i = 0; i < n; i++) cout << " " << H[i];
  cout << endl;
}

int left(int i, int size) {
  int x = i + 1;
  if (x * 2 <= size) return x * 2 - 1;
  else return NIL;
}

int right(int i, int size) {
  int x = i + 1;
  if (x * 2 + 1 <= size) return x * 2;
  else return NIL;
}

void maxHeapify(int src, int size) {
  int l, r, largest;
  l = left(src, size);
  r = right(src, size);

  if (l != NIL && H[l] > H[src]) largest = l;
  else largest = src;

  if (r != NIL && H[r] > H[largest]) largest = r;

  if (largest != src) {
    swap(H[src], H[largest]);
    maxHeapify(largest, size);
  }
}

int main() {
  int n, i;
  cin >> n;

  for (i = 0; i < n; i++) cin >> H[i];
  for (i = n / 2; 0 <= i; i--) maxHeapify(i, n);
  print(n);

  return 0;
}

