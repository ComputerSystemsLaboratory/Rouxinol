#include <bits/stdc++.h>
using namespace std;

#define NIL -1
#define MAX 500000

// 1 originとして使う
int heap[MAX*2 + 1];
int H;

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

int main(){

  scanf("%d", &H);

  for(int i=1; i<=H; i++){
    scanf("%d", &heap[i]);
  }

  buildMaxHeap();

  for(int i=1; i<=H; i++){
    printf(" %d", heap[i]);
  }
  printf("\n");

  return 0;
}

