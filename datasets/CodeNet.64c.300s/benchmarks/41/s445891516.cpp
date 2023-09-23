#include<stdio.h>
#include<cstdlib>

int H; // the number of elements

void P(){
  printf("\ntest\n");
}

void swap(int *a, int *b){
  int tmp;
  tmp = *a;
  *a = *b;
  *b = tmp;
}

int parent(int i){
  if(i == 1) return 0;
  return i / 2;
}

int left(int i){
  if(i * 2 > H) return 0;
  return i * 2;
}

int right(int i){
  if(i * 2 + 1 > H) return 0;
  return i * 2 + 1;
}

void PrintAllElement(int *A){
  int i;
  for(i = 1; i < H + 1; i++){
    printf("node %d: key = %d, ", i, A[i]);
    if(parent(i)){
      printf("parent key = %d, ", A[parent(i)]);
    }
    if(left(i)){
      printf("left key = %d, ", A[left(i)]);
    }
    if(right(i)){
      printf("right key = %d, ", A[right(i)]);
    }
    printf("\n");
  }
}

void maxHeapify(int *A, int i){
  int l, r, largest;
  l = left(i);
  r = right(i);
  // choose the largest node from [i], [l] and [r]
  if(l != 0 && A[l] > A[i]){
    largest = l; 
  }else{
    largest = i;
  }
  if(r != 0 && A[r] > A[largest]){
    largest = r;
  }

  // when largest = r or l
  if(largest != i){
    swap(&A[i], &A[largest]);
    maxHeapify(A, largest);
  }
}

void buildMaxHeap(int *A){
  for(int i = H/2; i > 0; i--){
    maxHeapify(A, i);
  }
}

int main(){
  int i, *A;
  
  scanf("%d", &H);
  A = (int *)malloc(sizeof(int) * H + 1);
  for(i = 1; i < H + 1; i++){
    scanf("%d", &A[i]);
  }

  buildMaxHeap(A);

  for(i = 1; i < H + 1; i++){
    printf(" %d", A[i]);
  }
  printf("\n");

  return 0;
}

