#include<bits/stdc++.h>
using namespace std;

#define N 100000

int main(){
  int H, Heap[N+1];

  cin >> H;

  for(int i = 1 ; i <= H ; i++){
    cin >> Heap[i];
  }

  for(int i = 1 ; i <= H ; i++){

    cout << "node " << i << ": key = " << Heap[i] << ", ";

    if(i / 2 >= 1){
      cout << "parent key = " << Heap[i/2] << ", ";
    }

    if(2 * i <= H){
      cout << "left key = " << Heap[2*i] << ", ";
    }

    if(2 * i + 1 <= H){
      cout << "right key = " << Heap[2*i+1] << ", ";
    }
  
    cout << endl;

  }
  return 0;
}