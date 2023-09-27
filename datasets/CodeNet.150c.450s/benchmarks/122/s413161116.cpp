#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

#define N 200000000
#define INF 200000001

int size;
int h[N];

void swap(int *a, int* b) {
  int tmp = *a;
  *a = *b;
  *b = tmp;
}

void maxHeapify(int i) {
  int l = 2*i;
  int r = 2*i+1;
  int valM;
  if ( l <= size && h[l] > h[i] ) valM = l;
  else valM = i;
  if ( r <= size && h[r] > h[valM] ) valM = r;
  if ( valM != i ) {
    swap(&h[i], &h[valM] );
    maxHeapify(valM);
  }
}

void hIncreaseKey ( int i, int key ) {
  if ( key < h[i] ) return;
  h[i] = key;
  while ( i > 1 && h[i/2] < h[i] ) {
    swap( &h[i], &h[i/2] );
    i = i/2;
  }
}

void maxHeapInsert ( int key ) {
  size++;
  h[size] = -INF;
  hIncreaseKey(size, key);
}

int heapExtractMax() {
  int valM;
  if ( size < 1 ) return 0;
  valM = h[1];
  h[1] = h[size--];
  maxHeapify(1);
  return valM;
}

int main() {
  string input;
  size = 0;
  while( cin >> input ) {
    if ( input == "end" ) break;
    if ( input == "extract" ) {
      cout << heapExtractMax() << endl;
    } else {
    int val;
    cin >> val;
    maxHeapInsert(val);
    }
  }
  return 0;
}