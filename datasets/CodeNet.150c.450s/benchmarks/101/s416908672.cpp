#include <stdio.h>
#define N 100000

int A[N] = {0};

int serch(int x){
  if(x == A[x])
    return x;
  
  return A[x] = serch(A[x]);
}

int main(){
  int i, m, n, x, y, z;
  
  for(i=0; i<N; i++)
    A[i] = i;
  
  scanf("%d %d", &m, &n);
  
  for(i=0; i<n; i++){
    scanf("%d %d", &x, &y);
    if(serch(x) != serch(y))
      A[serch(y)] = serch(x);
  }
  
  scanf("%d", &z);
  
  for(i=0; i<z; i++){
    scanf("%d %d", &x, &y);
    if(serch(x) == serch(y))
      printf("yes\n");
    else
      printf("no\n");
  }
  
  return 0;
}