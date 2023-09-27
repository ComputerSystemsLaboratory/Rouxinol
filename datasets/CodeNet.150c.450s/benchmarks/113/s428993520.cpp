#include<cstdio>
 
int main(){
  int x = 1, i = 1;
  while( true ){
    scanf("%d", &x);
    if(x == 0) break;
    printf("Case %d: %d\n", i, x);
    i = i + 1;
  }
  return 0;
}