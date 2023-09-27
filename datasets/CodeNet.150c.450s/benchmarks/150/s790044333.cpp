#include<stdio.h>
#define N 10000
int A[2000001],C[N],B[2000001];
int main()
{
  int i,n;
  
  scanf("%d",&n);
  for(i=1;i<n+1;i++){
    scanf("%d",&A[i]);
  }
 
  for(i=0;i<N;i++){
    C[i]=0;
  }
  for(i=1;i<n+1;i++){
    C[A[i]]+=1;
  }
  for(i=0;i<N;i++){
    C[i]+=C[i-1];
  }
  for(i=n+1;i>0;i--){
    B[C[A[i]]]=A[i];
    C[A[i]]-=1;
  }
 
  for(i=1;i<n;i++){
    printf("%d ",B[i]);
  }
  printf("%d",B[i]);
  printf("\n");
  return 0;
}