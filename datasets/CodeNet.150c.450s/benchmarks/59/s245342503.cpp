#include <stdio.h>

int main()
{
  int N,A[1000],i,j,key;

  scanf("%d",&N);
  for(i=0;i<N;i++) {
    scanf("%d",&A[i]);
      }

  for(j=0;j<N;j++) {
    if(j>0) { printf(" ");
    }
    
    printf("%d",A[j]);
  }
  printf("\n");

  for(i=1;i<N;i++) {
    key=A[i];
    j=i-1;

  while(j>=0 && A[j]>key){
    A[j+1] = A[j];
    j--;
  }
  A[j+1] = key;
  
  for(j=0;j<N;j++) {
    if(j>0) { printf(" ");
    }
    
    printf("%d",A[j]);
  }
  printf("\n");

  }

  return 0;
}