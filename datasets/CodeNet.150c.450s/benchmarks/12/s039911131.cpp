#include<bits/stdc++.h>
using namespace std;
int A[250+1], h;

int parent(int i){
  return i/2;
}

int left(int i){
  return i*2;
}

int right(int i){
  return i*2+1;
}

int main(void){
  int i;
  
  scanf("%d", &h);
  for(i=1; i<=h; i++) scanf("%d", &A[i]);

  for(i=1; i<=h; i++){
    printf("node %d: key = %d, ", i, A[i]);

    if(i != 1) printf("parent key = %d, ", A[parent(i)]);
    
    if(left(i)  <= h) printf("left key = %d, ", A[left(i)]);
    if(right(i) <= h) printf("right key = %d, ", A[right(i)]);

    printf("\n");
  }
  
  return 0;
}

