#include <cstdio>

using namespace std;

int main() {
   int n = 0;
   double N = 0;
   int M = 0;
   int L = 100;
   int c = 0;
  scanf("%d", &n);
  for (int i = 0;i < n; i++) {
   N = L;
   M = L;
   c = 0;
   N *= 1.05;
   N -= M;
  while (N > 1) {
   N -= 1;
   c += 1;
  }
  if ( N > 0) {
   L += 1;
   }
   L += c;

  }

 L *= 1000;
 printf("%d\n", L);
  return 0;
}