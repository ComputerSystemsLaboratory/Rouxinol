#include <iostream>
using namespace std;
#define INF 2000000001
int heap[500500];
int H;

void swap(int a, int b) {
  int c = heap[a];
  heap[a] = heap[b];
  heap[b] = c;
}

int left(int p) {
  return p*2;
}

int right(int p) {
  return p*2+1;
}

int parent(int p) {
  return p/2;
}

void heapify(int p) {
  int l = left(p);
  if (l > H) l = 0;
  int r = right(p);
  if (r > H) r = 0;
  int largest;
  if (heap[r] > heap[l] && heap[r] > heap[p]) {
    largest = r;
  } else if (heap[l] > heap[r] && heap[l] > heap[p]) {
    largest = l;
  } else {
    largest = p;
  }
  if (largest != p) {
    swap(p, largest);
    heapify(largest);
  }
}

void build() {
  for (int i = H/2; i > 0; i--) {
    heapify(i);
  }
}

int main() {
  heap[0] = -INF;
  cin >> H;
  for (int i = 1; i <= H; i++) {
    cin >> heap[i];
  } 
  build();
  for (int i = 1; i <= H; i++) {
    cout << " " << heap[i];
  }
  cout << endl;
}


