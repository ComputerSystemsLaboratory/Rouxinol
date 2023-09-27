#include<bits/stdc++.h>
using namespace std;

#define N 2000000
#define INFTY (1<<30)
int H, Heap[N+1];

void maxHeapify(int i){
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
  
    maxHeapify(largest);
  }
}

void increaseKey(int i, int key){
  int tmp;
  if(key < Heap[i]){
    return;
  }

  Heap[i] = key;

  while(i > 1 && Heap[i/2] < Heap[i]){
    tmp = Heap[i];
    Heap[i] = Heap[i/2];
    Heap[i/2] = tmp;
    i /= 2;
  }
}

void insert(int key){
  H++;
  Heap[H] = -INFTY;
  increaseKey(H, key);
}

int extract(){
  int max;
  if(H < 1){
    return -INFTY;
  }
  max = Heap[1];
  Heap[1] = Heap[H--];
  maxHeapify(1);
  return max;
}

int main(){
  int key;
  string status;

  while(1){
    cin >> status;
    if(status == "end"){
      break;
    }

    if(status == "insert"){
      cin >> key;
      insert(key);
    }
    else{
      cout << extract() << endl;
    }
  }

  return 0;
}