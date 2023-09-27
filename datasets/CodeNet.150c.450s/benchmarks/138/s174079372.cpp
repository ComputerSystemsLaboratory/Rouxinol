
#include<stdio.h>

int gcd(int,int);

int main(){
  int a,b;
  int i,j;
  int ans;

  scanf("%d", &a);
  scanf("%d", &b);
  ans = gcd(a,b);
  printf("%d\n" ,ans);

  return 0;
}

int gcd(int x, int y){
  if(y==0){
    return x;
  }

  if(x >= y){
    return gcd(y, x%y);
  }else{
    return gcd(x, y%x);
  }

}