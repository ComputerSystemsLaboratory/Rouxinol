#include <bits/stdc++.h>
using namespace std;

int H;
vector<int> A;

void max_heapify(int i) {
  int l = i*2+1;
  int r = i*2+2;

  int largest;
  if ( l < H && A[l] > A[i] ) {
    largest = l;
  } else {
    largest = i;
  }
  if ( r < H && A[r] > A[largest] ) {
    largest = r;
  }

  if ( largest != i ) {
    swap(A[i], A[largest]);
    max_heapify(largest);  
  }
}

void build_maxheap() {
  for ( int i = H/2+1; i >= 0; i-- ) {
    max_heapify(i);    
  }
}

int main() {
  cin >> H;

  A = vector<int>(H);
  for ( int i = 0; i < H; i++ ) cin >> A[i];

  build_maxheap();

  for ( int i = 0; i < H; i++ ) cout << " " << A[i];  
  cout << endl;
  
  return 0;
}

