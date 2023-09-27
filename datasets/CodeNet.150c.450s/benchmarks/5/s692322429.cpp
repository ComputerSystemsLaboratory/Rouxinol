#include<stdio.h>
int main(){

  int i,array[100],a;

  scanf("%d",&a);
  for(i=0;i<a;i++){
    scanf("%d",&array[i]);
  }
  printf("%d",array[i-1]);
   for(i=i-2;i>=0;i--){
    printf(" %d",array[i]);
  }
   puts("");
   return 0;
}