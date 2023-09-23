#include <stdio.h>
#define N 100000
int partition(int*,int,int);
int main(){

  int i,n,q;
  int A[N];

  scanf("%d",&n);

  for(i=0;i<n;i++)
    scanf("%d",&A[i]);

  q = partition(A,0,i-1);

  for(i=0;i<n;i++){

    if(i==n-1)printf("%d",A[i]);
    else {
      if(i==q)printf("[%d] ",A[i]);
      else printf("%d ",A[i]);
    }
  }
  puts("");

  return 0;

}

int partition(int *A,int p,int r){

  int x,j,temp,i;

  x=A[r];

  i=p-1;

  for(j=p;j<r;j++){

    if(A[j]<=x){
      i++;
      temp=A[i];
      A[i]=A[j];
      A[j]=temp;
    }
  }

    temp=A[i+1];
    A[i+1]=A[r];
    A[r]=temp;
  
    return i+1;

}