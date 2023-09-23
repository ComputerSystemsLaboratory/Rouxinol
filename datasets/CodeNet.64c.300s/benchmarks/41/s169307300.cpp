#include<bits/stdc++.h>
using namespace std;
int A[500000+1], h;

int parent(int i){
  return i/2;
}

int left(int i){
  return i*2;
}

int right(int i){
  return i*2+1;
}

void maxHeap(int i){
  int l=left(i), r=right(i);
  int largest;
  
  if(l <= h && A[l] > A[i]) largest=l;
  else largest=i;

  if(r <= h && A[r] > A[largest]) largest=r;

  if(largest != i){
    swap(A[i], A[largest]);
    maxHeap(largest);
  }
}

  


int main(void){
  int i;
  
  scanf("%d", &h);
  for(i=1; i<=h; i++) scanf("%d", &A[i]);

  for(i=h/2; i>=1; i--) maxHeap(i);  

  for(i=1; i<=h; i++) printf(" %d", A[i]);
  printf("\n");
  
  return 0;
}

