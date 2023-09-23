#include <stdio.h>


int main(){

int A[100000];
  int j,i,num,temp,x;

  scanf("%d",&num);
  for(i=0;i<num;i++){
    scanf("%d",&A[i]);
  }


  x = A[num-1];
  i=-1;
  for(j = 0;j<num-1;j++){
    if( A[j] <= x){
      i = i + 1;
      temp = A[i];
      A[i] = A[j];
      A[j] = temp;
    }
}
  temp = A[i+1];
  A[i+1] = A[num-1];
  A[num-1] = temp;


  for(j=0;j<num-1;j++){
    if(j == i+1) printf("[%d] ",A[j]);
    else printf("%d ",A[j]);
  }
  printf("%d\n",A[num-1]);
}