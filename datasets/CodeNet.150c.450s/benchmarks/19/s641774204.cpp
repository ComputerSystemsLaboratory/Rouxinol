#include<cstdio>

int main(){
  int x,y,z;
  while(1){
    scanf("%d %d",&x,&y);
    if(x>y){
      z=x;
      x=y;
      y=z;
    }
    else if(x==y && x==0)
      break;
    printf("%d %d\n",x,y);
  } 
  return 0;
}