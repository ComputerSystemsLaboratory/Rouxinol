#include<stdio.h>
#define N 65536

int main(){
  int a[N],i,j;
  i=1;
  while(1){
    scanf("%d",&j);
    a[i]=j;
    j=i;
    if(a[i]==0){
      break;
    }
    i++;
  }
  for(i=1;i<j;i++){
    printf("Case %d: %d\n",i,a[i]);
  }
}