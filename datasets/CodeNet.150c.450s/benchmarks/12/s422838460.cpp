#include <bits/stdc++.h>
using namespace std;

constexpr int MAX = 300;

int gSize;
int gHeap[MAX];

int main(){
  cin >> gSize;
  for( int i = 0; i < gSize; i++ ) cin >> gHeap[i];

  for( int i = 0; i < gSize; i++ ){
    cout << "node " << i + 1 << ": "
	 << "key = " << gHeap[i] << ", ";

    if( i != 0 ){
      cout << "parent key = " << gHeap[(i - 1) / 2] << ", ";
    }

    if( i * 2 + 1 < gSize ){
      cout << "left key = " << gHeap[i * 2 + 1] << ", ";
    }
    if( i * 2 + 2 < gSize ){
      cout << "right key = " << gHeap[i * 2 + 2] << ", ";
    }

    cout << endl;
  }
}

