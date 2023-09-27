#include<stdio.h>
#define INF 2000000001
 
int t[250],n;
 
void parent(int x){
  if(x!=0){
    printf("parent key = %d, ",t[(x-1)/2]);
  }
}
 
void left(int x){
  int y=x*2+1;
  if(y<250&&t[y]!=INF){
    printf("left key = %d, ",t[y]);
  }
}
 
void right(int x){
  int y=x*2+2;
  if(y<250&&t[y]!=INF){
    printf("right key = %d, ",t[y]);
  }
}
 
int main(){
  int i;
  scanf("%d",&n);
  for(i=0;i<n;i++)scanf("%d",&t[i]);
  for(i=n;i<250;i++)t[i]=INF;
 
  for(i=0;i<n;i++){
    printf("node %d: key = %d, ",i+1,t[i]);
    parent(i);
    left(i);
    right(i);
    printf("\n");
  }
  return 0;
}