#include <stdio.h>
int gcd(int ,int);
int main(){
  int a,b;
  scanf("%d %d",&a,&b);
  int max = 1;
  int i;
  max = gcd(a,b);
  printf("%d\n",max);
  return 0;
}
int gcd(int m,int n){
  int rest;
  int x = (m > n) ? m:n;
  int y = (x == m)? n:m;
  while(1){
    rest = x%y;
    if(rest ==0) return y;
    x = y;
    y = rest;
  }
}