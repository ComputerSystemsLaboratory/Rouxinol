#include<stdio.h>

#define N 5000000

void maxheapity(int *,int);

void buildmaxheap(int*);

int num;

int heap[N];

int main(){
  int i;

  scanf("%d",&num);

  for(i=1;i<=num;i++) scanf("%d",&heap[i]);

  buildmaxheap(heap);

  for(i=1;i<=num;i++){
    printf(" %d",heap[i]);
  }
  printf("\n");
  


  return 0;
}


void maxheapify(int *A,int i){
  int l,r;
  int temp;
  int largest;

  
  
  l = 2*i;
  r = 2*i+1;
  //左の子、自分、右の子で値が最大のノードを選ぶ
  if (l <= num && A[l] > A[i])
    largest = l;
  else 
    largest = i;
  if (r <= num && A[r] > A[largest])
    largest = r;

  //printf("largest %d\n",largest);

  if (largest != i){
    //iの子の方が値が大きい場合
    //A[i] と A[largest] を交換
    temp = A[i];
    A[i] = A[largest];
    A[largest] = temp;
    
    maxheapify(A, largest); // 再帰的に呼び出し
  }
}

void buildmaxheap(int *A){
  int i;
  // printf("1\n");
  for(i=num/2;i>0;i--) maxheapify(A,i);
}
  

