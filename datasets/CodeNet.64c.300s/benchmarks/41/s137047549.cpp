#include<stdio.h>
#include<stdio.h>

void maxHeapify(int[],int);
void builtMaxHeap(int[]);
int H;

int main()
{
  int i;

  scanf("%d",&H);
  
  int a[H+1];

  for(i=1; i<=H; i++){
    scanf("%d",&a[i]);
  }

  builtMaxHeap(a);

  for(i=1; i<=H; i++)
    printf(" %d",a[i]);

  printf("\n");
}

void maxHeapify(int a[],int i){
  int l,r,largest,tmp;
  l = 2*i;
  r = 2*i+1;

  if(l <= H && a[l] > a[i])
    largest = l;
  else
    largest = i;
  if(r<=H && a[r] > a[largest])
    largest = r;

  if(largest != i){
    tmp = a[i];
    a[i] = a[largest];
    a[largest] = tmp;
    maxHeapify(a,largest);
  }
}

void builtMaxHeap(int a[]){
  for(int i=H/2; i>=1; i--){
    maxHeapify(a,i);
  }
}

