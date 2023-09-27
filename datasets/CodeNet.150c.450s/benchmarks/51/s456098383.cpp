#include<stdio.h>
int main(){
  int a[30]={0};
  int i,j;
  for(i=0;i<28;i++){
    scanf("%d",&j);
    a[j-1] = 1;
  }
  for(i=0;i<30;i++){
    if(a[i] == 0){
      printf("%d\n",i+1);
    }
  }
  return(0);
}