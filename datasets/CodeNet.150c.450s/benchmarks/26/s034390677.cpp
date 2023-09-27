#include<stdio.h>
int main (){
  int i,j,a,b;
  scanf("%d%d",&i,&j);
    if(i>j){
      printf("a > b\n");
    }
    else if(i<j){
      printf("a < b\n");
    }
    else{
      printf("a == b\n");
    }
  return 0;
}