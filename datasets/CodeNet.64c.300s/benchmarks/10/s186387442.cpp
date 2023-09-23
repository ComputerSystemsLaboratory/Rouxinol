#include<stdio.h>
#define N 65536

int main(){
  int i,j,k,l,m;
  int a[N],b[N];
  i=1;
  while(1){
    scanf("%d %d",&j,&k);
    if(k<j){
      l=j;
      j=k;
      k=l;
    }
    a[i] = j;
    b[i] = k;
    m=i;
    if(j==0 && k==0){
      break;
    }
    i++;
  }
  for(i=1;i<m;i++){
    printf("%d %d\n",a[i],b[i]);
  }
}