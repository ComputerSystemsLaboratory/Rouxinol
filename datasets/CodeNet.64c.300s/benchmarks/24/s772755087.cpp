#include<cstdio>

int main()
{
  while(1) {
    int sum_a,sum_b,a,b,i,n;
    scanf("%d",&n);
    if (n == 0) return 0;
    sum_a = 0;
    sum_b = 0;
    for (i = 0; i < n; i++) {
      scanf("%d %d",&a,&b);
      if (a > b) {
        sum_a += a + b;
      } else if (b > a) {
        sum_b += a + b;
      } else {
        sum_a += a;
        sum_b += b;
      }
    }
    printf("%d %d\n",sum_a,sum_b);
  }
  return 0;
}