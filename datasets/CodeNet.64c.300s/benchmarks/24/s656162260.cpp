#include <stdio.h>
int main(){
  for(;;){
    int n,i,j,k;
    int A={0},B={0};
    scanf("%d",&n);
    if(n==0){
      return 0;
    }
      for(i=0;i<n;i++){
      scanf(" %d %d",&j,&k);
      if(j>k){
        A+=(j+k);
      } else if(j<k){
        B+=(j+k);
      } else if(j==k){
        A+=j;
        B+=k;
      }
    }
    printf("%d %d\n",A,B);
  }
}