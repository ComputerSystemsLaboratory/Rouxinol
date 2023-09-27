#include <stdio.h>
#include <stdlib.h>
#define H 2000001
#define K -2000000001

int left(int i){ return i*2; }

int right(int i){ return i*2 + 1; }

int parent(int i){ return i/2; }

void swap(int *x, int *y){
  int tmp;
  tmp = *x;
  *x = *y;
  *y = tmp;
}

int n;

void maxHeapify(int *arr, int i){
  int largest;
  int l = left(i), r = right(i);

  // choice largest key in this and parents
  if(l <= n && arr[l] > arr[i]) largest = l;
  else largest = i;
  if(r <= n && arr[r] > arr[largest]) largest = r;

  if(largest != i){ // if arr[i]'s parent key larger than arr[i]'s key
    swap(&arr[i], &arr[largest]);
    maxHeapify(arr, largest);
  }
}

int extractMax(int *heap){
  if(n<1) printf("heap under flow\n");

  int max = heap[1];
  heap[1] = heap[n];
  n--;
  maxHeapify(heap,1);
  return max;
}

void increseKey(int *arr, int i, int key){
  if(key<arr[i]) printf("New key less than actual key\n");
  arr[i] = key;
  while(i>1 && arr[parent(i)]<arr[i]){
    swap(&arr[i],&arr[parent(i)]);
    i = parent(i);
  }
}

void heapInsert(int *heap, int key){
  n++;
  heap[n] = K;
  increseKey(heap,n,key);
}

int main(void){
  int k;
  int heap[H];
  char inst[10];

  while(1){
    scanf("%s", inst);
    if(inst[0] == 'e'){
      if(inst[1] == 'n') break;
      else printf("%d\n", extractMax(heap));
    }
    if(inst[0] == 'i'){
      scanf("%d", &k);
      heapInsert(heap, k);
    }
  }
  return 0;
}