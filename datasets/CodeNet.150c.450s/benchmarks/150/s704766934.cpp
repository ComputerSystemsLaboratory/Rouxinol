#include<stdio.h>
#define N 2000000
int A[N],B[N],C[N];
int main(void){
 
  int i,j,k=0,n;
    
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d",&A[i]);
    C[A[i]]=C[A[i]]+1;
    if(k<A[i])k=A[i];
  }
 
  for(i=1;i<=k;i++){
    C[i]=C[i]+C[i-1];
  }
  
  for(i=0;i<n;i++){
    B[C[A[i]]-1]=A[i];
    C[A[i]]--;
  }
 
  for(i=0;i<n;i++){
    if(i!=n-1){
      printf("%d ",B[i]);
  }
    else printf("%d\n",B[i]);
      
  }
  return 0;
}