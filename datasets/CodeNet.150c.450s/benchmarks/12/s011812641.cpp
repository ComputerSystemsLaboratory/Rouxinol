#include<stdio.h>
#include<cstdlib>

int H; // the number of elements

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

int main(){
  int i, *A;
  
  scanf("%d", &H);
  A = (int *)malloc(sizeof(int) * H + 1);
  for(i = 1; i < H + 1; i++){
    scanf("%d", &A[i]);
  }

  PrintAllElement(A);

  return 0;
}

