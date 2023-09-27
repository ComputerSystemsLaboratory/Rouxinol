#include <cstdio>

using namespace std;

int main() {
  int n;
  scanf("%d", &n);
  int debt = 100000;
  for (int i=0;i<n;i++) {
    debt = debt*105/100;
    debt = (debt+999)/1000;
    debt = debt*1000;
  }
  printf("%d\n", debt);
  return 0;
}