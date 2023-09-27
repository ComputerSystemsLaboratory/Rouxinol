#include<stdio.h>
#define MAX 100001


int main(){
  int H, i;
  int A[MAX];
  scanf("%d",&H);
  for(i=1;i<=H;i++){
    scanf("%d",&A[i]);
  }
  
  for(i=1;i<=H;i++){
    printf("node %d: key = %d, ",i,A[i]);
    if(i/2 >= 1)printf("parent key = %d, ",A[i/2]);
    if(i*2 <= H)printf("left key = %d, ",A[i*2]);
    if(i*2+1 <= H)printf("right key = %d, ",A[i*2+1]);
    printf("\n");
  }
  
  return 0;
}

