#include <stdio.h>
#include <math.h>
int prime(int );

int main(){

  int n,m,i,ans = 0;

  scanf("%d\n",&n);

  for(i = 0;i < n;i++){

    scanf("%d",&m);
    if(m == 2) ans++;
    if(prime(m) == 1){
      // printf("m = %d\n",m);
      ans++;
    }
  }
  printf("%d\n",ans);
  return 0;
}
  int prime(int in){

    int i,j;
    if(in % 2 == 0) return 0;
    for(i = 3;i <= sqrt(in);i+=2){
      if(in % i == 0) return 0;
    }
    return 1;
  }