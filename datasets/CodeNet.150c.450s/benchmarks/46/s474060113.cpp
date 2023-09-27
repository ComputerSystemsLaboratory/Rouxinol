#include <stdio.h>

int main(){
  int n, x, ans[1000], i=0;
  
  while(1){
    scanf("%d %d", &n, &x);
    if(n==0&&x==0) break;

    if(x < 6){ans[i]=0;i++;continue;}
    if(x > 3*n-3){ans[i]=0;i++;continue;}

    ans[i]=0;
    for(int j=1;j<=n;j++){
      for(int k=j+1;k<=n;k++){
        for(int l=k+1;l<=n;l++){
          if(j+k+l==x)ans[i]++;
        }
      }
    }
    i++;

  }

  for(int l=0;l<i;l++){
    printf("%d\n", ans[l]);
  }

  return 0;
}