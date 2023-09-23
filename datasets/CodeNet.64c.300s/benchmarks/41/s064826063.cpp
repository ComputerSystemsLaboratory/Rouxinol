#include <stdio.h>
#include <stdlib.h>

void maxheapify(int *, int);
void buildmaxheap(int *);

int n;

int main(){

  int i;
  int *a;
  
  scanf("%d", &n);
  
  a = (int *)malloc(sizeof(int) * (n + 1));
  
  for(i = 1; i <= n; i++){
    scanf("%d", &a[i]);
  }
 
  buildmaxheap(a);

  for(i = 1; i <= n; i++){
    printf(" %d", a[i]);
  }
  printf("\n");
 
  return 0;
}

void maxheapify(int *a, int i){
  int l = i * 2;
  int r = i * 2 + 1;
  int largest;
  int tmp;

  if(l <= n && a[l] > a[i]) largest = l;
  else largest = i;

  if(r <= n && a[r] > a[largest]) largest = r;

  if(largest != i){
    tmp = a[i];
    a[i] = a[largest];
    a[largest] = tmp;
    maxheapify(a, largest);
  }
}

void buildmaxheap(int *a){

  int i;

  for(i = n / 2; i != 0; i--){
    maxheapify(a, i);
  }

}