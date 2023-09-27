#include<bits/stdc++.h>
using namespace std;

#define N 2000000

int Heap[N+1];

void maxHeapify(int H, int i){
  int largest, tmp;
  int l = 2 * i;
  int r = 2 * i + 1;

  if(l <= H && Heap[l] > Heap[i]){
    largest = l;
  }
  else{
    largest = i;
  }

  if(r <= H && Heap[r] > Heap[largest]){
    largest = r;
  }

  if(largest != i){
    tmp = Heap[i];
    Heap[i] = Heap[largest];
    Heap[largest] = tmp;
  
    maxHeapify(H, largest);
  }
}

int main(){
  int H;

  cin >> H;

  for(int i = 1 ; i <= H ; i++){
    cin >> Heap[i];
  }

  for(int i = H ; i >= 1 ; i--){
    maxHeapify(H, i);
  }

  for(int i = 1 ; i <= H ; i++){
    cout << " " << Heap[i];
  }

  cout << endl;

  return 0;
}