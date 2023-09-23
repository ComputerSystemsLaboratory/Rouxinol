#include<stdio.h>

int partition(int,int);

int A[100000];

int main()
{
  
  int i,j,n,p,r;

  scanf("%d",&n);

  for(i=0; i<n; i++){
    scanf("%d",&A[i]);
  }

  p=0;
  r=n-1;

  j=partition(p,r);

  for(i=0; i<n; i++){
    if(i>0) printf(" ");
    if(i == j){
      printf("[%d]",A[i]);
      continue;
    }
    printf("%d",A[i]);
  }
  printf("\n");
 
  return 0;
}

int partition(int p, int r)
{
  int x = A[r];
  int i = p-1;
  int tmp;

  for(int j = p; j<r; j++){
    if(A[j] <= x){
      i = i+1;
      tmp = A[j];
      A[j] = A[i];
      A[i] = tmp;
    }
  }
  tmp = A[r];
  A[r] = A[i+1];
  A[i+1] = tmp;
  return i+1;
}

