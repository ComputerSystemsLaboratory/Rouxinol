#include <stdio.h>

int main(){
  int a[4], b[4];
  while(scanf("%d%d%d%d%d%d%d%d", a,a+1,a+2,a+3,b,b+1,b+2,b+3)!=EOF){
    int x[10];
    int i;
    for(i=0;i<10;i++) x[i] = 0;

    for(i=0;i<4;i++) x[a[i]] = i+1;

    int hit=0, blow=0;

    for(i=0;i<4;i++){
      if(x[b[i]]){
        if(x[b[i]] == i+1) hit++;
        else blow++;
      }
    }
    printf("%d %d\n", hit, blow);
  }
}
      