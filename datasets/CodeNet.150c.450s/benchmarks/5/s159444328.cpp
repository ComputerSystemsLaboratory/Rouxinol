#include <stdio.h>
int main(){
  int i,b,n;
  int array[100];
  scanf("%d",&n);
  for(i=n-1;i>=0;i--){
    scanf("%d",&b);
    array[i]=b;
  }
  for(i=0;i<=n-1;i++){
    if(i<n-1){
      printf("%d ",array[i]);
    }
    else if(i==n-1){
      printf("%d\n",array[i]);
    }
  }

  return 0;
}