#include<stdio.h>

int main(){
  int h[10];
  int i,j,tmp;
  for(i=0;i<10;i++)
    scanf("%d",&h[i]);
  for(i=0;i<3;i++){
    for(j=9;j>i;j--){
      if(h[j]>h[j-1]){
        tmp=h[j-1];
        h[j-1]=h[j];
        h[j]=tmp;
      }
    }
  }
  printf("%d %d %d\n",h[0],h[1],h[2]);
  return 0;
}