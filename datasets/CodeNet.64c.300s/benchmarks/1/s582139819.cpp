#include<stdio.h>
 
int A[100000];
int partition(int A[],int r){
  int x,i,j,tmp,tmp2;
 
  x = A[r];
  i = -1;
  for(j=0 ; j<r ; j++){
    if(A[j]<=x){
      i++;
      tmp=A[i];
      A[i]=A[j];
      A[j]=tmp;
    }
  }
  tmp2=A[i+1];
  A[i+1]=A[r];
  A[r]=tmp2;
  return i+1;
}
 
int main(){
  int i,j,count,q;
 
  scanf("%d",&count);
 
  for(i=0 ; i<count ; i++){
    scanf("%d",&A[i]);
  }
 
  q = partition(A,count-1);
  for(i=0 ; i<count-1 ; i++){
    if(i==q){
      printf("[%d] ",A[q]);
      continue;
    }
    printf("%d ",A[i]);
  }
  printf("%d\n",A[i]);
  return 0;
 
}