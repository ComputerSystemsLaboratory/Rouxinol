#include <stdio.h>
int n,x,s,i,j,k;
int main(){
  for(;;){
    scanf(" %d %d",&n,&x);
    if(n==0&&x==0){
      return 0;
    }
    s=0;
    for(i=1;i<=n;i++){
      for(j=1;j<=n;j++){
        for(k=1;k<=n;k++){
          if(i!=j&&j!=k&&k!=i&&i+j+k==x){
            s+=1;
          }
        }
      }
    }
    printf("%d\n",s/6);
  }
}