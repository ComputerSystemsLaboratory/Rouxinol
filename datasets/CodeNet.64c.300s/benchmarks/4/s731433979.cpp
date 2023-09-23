#include<stdio.h>
int main (){
  int i,j,z;
  scanf("%d%d%d",&i,&j,&z);
    if(i<j&&j<z){
      printf("Yes\n");
    }
    else{
      printf("No\n");
    }
  return 0;
}