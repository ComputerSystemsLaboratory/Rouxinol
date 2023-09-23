#include<stdio.h>
int main(){
  int n,a,b,c,cnt=0;
  scanf("%d %d %d",&a,&b,&c);
  for(n=1;n<=c;n++){
    if(c%n==0&&a<=n&&n<=b){
      cnt++;
    }
  }
  printf("%d\n",cnt);
  return 0;
}