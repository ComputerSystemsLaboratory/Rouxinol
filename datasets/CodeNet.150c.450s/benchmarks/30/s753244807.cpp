#include<stdio.h>
#include<iostream>
using namespace std;

int selectinsert(int A[], int n){
  int i,j,minv;
  int sw=0;
    for ( i = 0;i<n-1;i++){
      minv=i;
      for (j=i;n>j;j++){
        if(A[minv]>A[j]){
        minv=j;
        }
      }
      swap(A[i],A[minv]);
      if(i != minv){
      sw +=1;
      }
  }
  return sw;
}

int main(){
  int n, i, j,sw;
  int A[100];
  scanf("%d", &n);
  for ( i = 0; i < n; i++ ) scanf("%d", &A[i]);
  sw=selectinsert(A,n);
  for ( i = 0; i < n; i++ ){
    if ( i > 0 ) printf(" ");
    printf("%d", A[i]);
  }
  printf("\n");
  printf("%d\n", sw);
  return 0;
}