#include<stdio.h>
int main(){
  int a, b, c;
  scanf("%d %d %d", &a, &b, &c);
  printf((a<b&&b<c)?"Yes\n":"No\n");
  return 0;
}
