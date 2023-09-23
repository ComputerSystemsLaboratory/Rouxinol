#include<stdio.h>

int main(){

  int a = 0;
  int b = 0;
  int c = 0;
  int cnt = 0;
  int x = 0;

  scanf("%d %d %d",&a,&b,&c);

  for( x = a; x <= b; x++){
    if(c % x == 0)
      cnt++;
  }
  printf("%d\n",cnt);

  return 0;
}