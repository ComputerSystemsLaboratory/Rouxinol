#include <stdio.h>

int parent(int);
int left(int);
int right(int);


int main(){
  int n,i,A[250],j;
  scanf("%d",&n);
  for(i=1;i<=n;i++){
    scanf("%d",&A[i]);
  }
  for(j=1;j<=n;j++){
    printf("node %d: ",j);
    printf("key = %d, ",A[j]);
    if(parent(j)>=1)
      printf("parent key = %d, ",A[parent(j)]);
    if(left(j)<=n)
      printf("left key = %d, ",A[left(j)]);
    if(right(j)<=n)
      printf("right key = %d, ",A[right(j)]);
    printf("\n");
  }
  return 0;
}
int parent(int j){
  return j/2;
}
int left (int j){
  return 2*j;
}
int right(int j){
  return 2*j+1;
}
	     
      

