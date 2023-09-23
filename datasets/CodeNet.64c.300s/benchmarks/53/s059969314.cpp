#include <cstdio>
using namespace std;

int main ()
{
  int a, b, c;
  int count = 0;

  scanf("%d", &a);
  scanf("%d", &b);
  scanf("%d", &c);

  for (int i = a; i <= b; i++) {
    if (c % i == 0) {
      count++;
    }
  }
  printf("%d\n", count);

  return 0;
}