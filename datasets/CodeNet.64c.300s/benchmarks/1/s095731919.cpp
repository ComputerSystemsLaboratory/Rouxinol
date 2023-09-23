#include<bits/stdc++.h>
using namespace std;

#define MAX 100000

int main(void){
  int n, x, A[MAX];
  int i, j;
  bool flag;

  scanf("%d", &n);
  for(i=0; i<n; i++) scanf("%d", &A[i]);
  x=A[n-1];

  for(i=0, j=0; i<n-1; i++){
    if(A[i]<=x){
      swap(A[i], A[j]);
      j++;
    }
  }

  swap(A[j], A[n-1]);

  for(i=0; i<n; i++){
    if(i) printf(" ");
    if(i==j) printf("[%d]", A[i]);
    else printf("%d", A[i]);
  }

  printf("\n");
  
  return 0;
}

