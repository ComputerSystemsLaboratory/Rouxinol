#include<stdio.h>
int main(){
  int i,j,a,n[10000],d,count=0;
  scanf("%d",&a);
  for(i=0;i<a;i++){
    scanf("%d",&n[i]);
  }
  for(i=0;i<a;i++){
    d=1;
    for(j=2;j*j<=n[i];j++){
      if(n[i]%j==0){
    d=0;
    break;
      }
    }
    if(d==1)count++;
  }
  printf("%d\n",count);
  return 0;
}