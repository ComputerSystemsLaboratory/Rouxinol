#include <cstdio>
using namespace std;

typedef long long int LLI;

int n;
LLI debt = 100000;

int main() {
  scanf("%d", &n);
  for (int i=0; i<n; i++) {
    debt = debt/100*105;
    if (debt % 1000) debt = (debt/1000+1)*1000;
  }
  printf("%lld\n", debt);
}