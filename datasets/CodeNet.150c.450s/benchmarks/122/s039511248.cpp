#include <bits/stdc++.h>
using namespace std;

#define MAX 2000000

// 1 originとして使う
int* heap = (int*)malloc(sizeof(int)*(MAX*2+1));
int H = 0;

int parent(int i) { return i/2;}
int left(int i) {return 2*i;}
int right(int i){return 2*i + 1;}

void maxHeapify(int i){
  int l = left(i);
  int r = right(i);
  int largest;

  if(l <= H && heap[i] < heap[l]) largest = l;
  else largest = i;
  if(r <= H && heap[largest] < heap[r]) largest = r;

  if(largest != i){
    swap(heap[i], heap[largest]);
    maxHeapify(largest);
  }
}

void buildMaxHeap(){
  for(int i=H/2; i>0; i--){
    maxHeapify(i);
  }
}

void insert(int key){
  H++;
  heap[H] = key;

  int idx = H;
  while(heap[idx] > heap[parent(idx)] && parent(idx) > 0){
    swap(heap[idx], heap[parent(idx)]);
    idx = parent(idx);
  }
}

int extractMax(){
  int ret = heap[1];
  heap[1] = heap[H--];
  maxHeapify(1);
  return ret;
}

int main(){

  char c[10];
  int key;

  while(1){
    scanf("%s",c);

    switch(c[2]){
      case 's':
      scanf("%d", &key);
      insert(key);
      break;

      case 't':
      printf("%d\n",extractMax());
      break;

      case 'd':
      default:
      return 0;
      break;
    }
  }

  return -1;
}

