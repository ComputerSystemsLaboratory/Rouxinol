#include <cstdio>

int main()
{
  int a, b;
  while(scanf("%d%d", &a, &b) != EOF){
    a += b;
    int cnt = 0;
    while(a){
      cnt++;
      a /= 10;
    }
    printf("%d\n", cnt);
  }
  return 0;
}