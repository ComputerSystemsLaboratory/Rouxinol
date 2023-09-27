#include<stdio.h>
int main(){
  int n,x,i,j,k,b=0,a[101]={0};
  while(1){
    scanf("%d %d",&n,&x);
    if(n==0&&x==0){
      break;
    }
    for(i=1;i<=n;i++){
      for(j=1;j<=n;j++){
    if(j!=i){
      for(k=1;k<=n;k++){
        if(k!=i&&k!=j){
          if(i+j+k==x){
        a[b]++;
          }
        }
      }
    }
      }
    }
    b++;
  }
  for(i=0;i<b;i++){
    printf("%d\n",a[i]/6);
  }
}