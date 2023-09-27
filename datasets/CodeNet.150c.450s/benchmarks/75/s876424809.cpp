#include<stdio.h>

int left(int);
int right(int);
void MaxHeapify(int,int);

int a[500000];


int main(){

  int num,i;


  scanf("%d",&num);
  for(i = 1; i <= num; i++){
    scanf("%d",&a[i]);
  }
  
  for(i = num/2; i >= 1; i--)MaxHeapify(num,i);
  
  for(i = 1; i <= num; i++){
    printf(" %d",a[i]);
  }
  printf("\n");
  
  return 0;
}

//関数
int Left(int i){
  return 2*i;
}

int Right(int i){
  return 2*i + 1;
}

void MaxHeapify(int num,int i){
  int l,r,largest,swap;

  l = Left(i);
  r = Right(i);

  if(l <= num && a[l] > a[i])largest = l;
  else largest = i;

  if(r <= num && a[r] > a[largest])largest = r;

  if(largest != i){
    swap = a[i];
    a[i] = a[largest];
    a[largest] = swap;
    MaxHeapify(num,largest);
  }
}