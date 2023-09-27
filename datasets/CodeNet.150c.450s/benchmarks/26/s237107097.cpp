#include<stdio.h>

int main(){
  int x,y;

  scanf("%d %d",&x,&y);
  if(x>y){
    printf("a > b\n");
  }
  else if(x<y){
    printf("a < b\n");
  }
  else{
    printf("a == b\n");
  }
  return 0;
}