#include <bits/stdc++.h>
using namespace std;

constexpr int MAX = 500100;

int gSize;
int gHeap[MAX];

int GetLeft( int i ){
  return i * 2 + 1;
}

int GetRight( int i ){
  return i * 2 + 2;
}

void MaxHeapify( int i ){
  int l = GetLeft( i );
  int r = GetRight( i );
  int largest = 0;

  if( l < gSize && gHeap[l] > gHeap[i] ){
    largest = l;
  }else{
    largest = i;
  }

  if( r < gSize && gHeap[r] > gHeap[largest] ){
    largest = r;
  }

  if( largest != i ){
    swap( gHeap[largest], gHeap[i] );
    MaxHeapify( largest );
  }
}


void BuildMaxHeap(){
  for( int i = ( gSize - 2 ) / 2; i >= 0; i-- ){
    MaxHeapify( i );
  }
}

int main(){
  cin >> gSize;
  for( int i = 0; i < gSize; i++ ) cin >> gHeap[i];

  BuildMaxHeap();

  for( int i = 0; i < gSize; i++ ){
    cout << " " << gHeap[i];
  }
  cout << endl;
}

