#include<iostream>
#include<algorithm>
using namespace std;

int h;

int parent(int i){
  return i / 2;
}

int left(int i){
  return 2 * i;
}

int right(int i){
  return 2 * i + 1;
}

void maxHeapify(int *A, int i){
  int l, r, largest;

  l = left(i);
  r = right(i);

  if(l <= h && A[l] > A[i]) largest = l;
  else largest = i;

  if(r <= h && A[r] > A[largest]) largest = r;

  if(largest != i){
    swap(A[i], A[largest]);
    maxHeapify(A, largest);
  }
}

int heapExtractMax(int *A){
  if(h < 1) return -1;

  int max = A[1];
  A[1] = A[h];
  h--;
  maxHeapify(A, 1); //rebuilding a max-Heap

  return max;
}

void heapIncreaseKey(int *A, int i, int key){
  if(key < A[i]) return ;

  //inset new value into the poper place
  A[i] = key;
  while(i > 1 && A[parent(i)] < A[i]){
    swap(A[i], A[parent(i)]);
    i = parent(i);
  }
}

void maxHeapInsert(int *A, int key){
  h++; //size up
  A[h] = -1;
  heapIncreaseKey(A, h, key);
}

int main(){

  int k, a[2000010];
  string command;

  //input
  while(cin >> command, command != "end"){
    if(command == "insert"){
      cin >> k;
      maxHeapInsert(a, k);
    }else if(command == "extract"){
      cout << heapExtractMax(a) << endl;
    }
  }

  return 0;
}

