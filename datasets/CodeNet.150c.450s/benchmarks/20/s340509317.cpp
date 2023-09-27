#include <cstdio>

int main(){
  int S;
  scanf("%d", &S);

  int tmp, h,m,s;
  h = (int)S/3600;
  tmp = S-h*3600;
  m = (int)tmp/60;
  s = tmp-m*60;
  printf("%d:%d:%d\n",h,m,s);
  return 0;
}