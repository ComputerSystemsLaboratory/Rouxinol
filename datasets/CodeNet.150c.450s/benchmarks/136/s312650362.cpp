#include <cstdio>

using namespace std;

long long gcd(int x, int y)
{
  return y?gcd(y, x%y):x;
}

long long lcm(int x, int y)
{
  return x/gcd(x, y)*y;
}

int main()
{
  long long a, b;
  while(scanf("%lld%lld", &a, &b) != -1){
    if(b > a){
      a += b;
      b = a - b;
      a -= b;
    }
    printf("%lld %lld\n", gcd(a, b), lcm(a, b));
  }
  return 0;
}