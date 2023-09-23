#include<stdio.h>
#define N 100001

int partition(int *,int,int );

int A[N];
int main(){
  
  int n,i,k;
  scanf("%d",&n);
  for(i=0;i<n;i++)
    scanf("%d",&A[i]);
  k=partition(A,0, n);
  for(i=0;i<k-1;i++)
    printf("%d ",A[i]);
  printf("[%d] ",A[k-1]);
  for(i=k;i<n-1;i++)
    printf("%d ",A[i]);
  printf("%d\n",A[n-1]);
  return 0;
}



int partition(int *A,int p, int r)
{
  int x,i,j,tmp;
  x=A[r-1];
  
  for(j=p;j<r;j++){

    if(A[j]<=x){
      tmp=A[i];
  A[i]=A[j];
  A[j]=tmp;

  i++;
  
    }}
  return i;
}


