#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
  int a[5];
  for (int i = 0; i < 5; i++) {
    scanf(" %d ", &a[i]);
    a[i] = -a[i];
  }
  sort(a, &a[5]);
  for (int i = 0; i < 5; i++) {
    printf("%d", -a[i]);
    if (i != 4) {printf(" ");}
    else {printf("\n");}
  }

  return 0;
}