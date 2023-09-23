#include<stdio.h>
int main(){

  int n,i;
  int number[100];
  
  scanf("%d",&n);
  
  for(i=0;i<n;i++){
    scanf("%d",&number[i]);
  }

  for(i=0;i<n;i++){
    if(i)printf(" ");
    printf("%d",number[n-i-1]);
  }
  printf("\n");
  return 0;
}
    