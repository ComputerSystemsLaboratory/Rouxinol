#include <cstdio>
#include <math.h>
#include <utility>

using namespace std;

int main ()
{
  int n;

  scanf("%d", &n);

  for (int i = 1; i <= n; i++) {
      int x = i;
      if ( x % 3 == 0){
        printf(" %d", i);
        continue;
      }

      while (x > 0) {
        if ( x % 10 == 3 ){
          printf(" %d", i);
          break;
        }
        x /= 10;
      }
  }
  printf("\n");

  return 0;
}