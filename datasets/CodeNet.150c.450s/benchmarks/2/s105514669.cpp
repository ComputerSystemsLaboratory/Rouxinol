#include<stdio.h>
int main(){
  int i,a,A[100000],z,jsta=0,jend=0,B[100000],j;
  scanf("%d",&a);
  for(i=0;i<a;i++){
    scanf("%d",&A[i]);
  }
  for(i=0;i<a;i++){
    if(A[i]<=A[a-1]){
      z=A[jsta];
      A[jsta]=A[i];
      A[i]=z;
      jsta++;
      jend++;
    }
    else jend++;
  
  }

   for(i=0;i<a;i++){
     if(i==jsta-1)printf("[%d] ",A[i]);
     else if(i!=a-1)printf("%d ",A[i]);
     else printf("%d",A[i]);
  }
   printf("\n");
}

