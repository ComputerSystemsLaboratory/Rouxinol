#include<stdio.h>
#include<stdlib.h>

#define H 2000000
#define NIL -2000000001
//int n;
//int A[H];
int heapsize =0;
void maxHeapify(int A[H],int i);
//void buildMaxHeap(int A[H]);
void HeapInsert(int A[H],int key);
void HeapIncreaseKey(int A[H],int i,int key);
int HeapExtractMax(int A[H]);


int main(){
  int i,x,key,max;
  char c[10];
  int A[H];
  while(1){
    scanf("%s",c);
      if(c[0]=='i'){
	scanf("%d",&key);
	HeapInsert(A,key);
      }
      else if(c[1]=='x'){
	max=HeapExtractMax(A);
	printf("%d\n",max);
      }
      else if(c[1]=='n'){
	break;
      }
  }

  return 0;
}
  void maxHeapify(int A[],int i){
  int l,r,largest,temp;
  l=i*2;
  r=i*2+1;
  if(l<=heapsize && A[l]>A[i]){
    largest = l;
  }
  else{
    largest = i;
  }
  if(r<=heapsize && A[r]>A[largest]){
    largest = r;
  }
  if(largest!=i){
    temp=A[i];
    A[i]=A[largest];
    A[largest]=temp;
    maxHeapify(A,largest);
  } 
}
/*
void buildMaxHeap(int A[]){
  int i; 
 for(i=n/2;i>=1;i--)
    maxHeapify(A,i);

}
*/
void HeapIncreaseKey(int A[],int i,int key){
  int temp;
  if(key<A[i])
    printf("error");
  A[i]=key;
  while(i>1 && A[i/2]<A[i]){
    temp=A[i];
    A[i]=A[i/2];
    A[i/2]=temp;
    i = i/2;
  }
}

void HeapInsert(int A[],int key){
  heapsize +=1;
  A[heapsize] = -1000000000;
  HeapIncreaseKey(A, heapsize, key);
}

int HeapExtractMax(int A[]){
  int max;

  if(heapsize < 1)
    printf("heap under flor\n");
  
  max = A[1];
  A[1] = A[heapsize];
  heapsize -= 1;
  maxHeapify(A, 1);
  return max;
  
}