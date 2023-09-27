#include <cstdio>
#include <cstring>
using namespace std;

char str[10000];

int main() {
  scanf("%s", str);
  int n = strlen(str);

  for (int i=n-1; i>=0; i--) {
    printf("%c", str[i]);
  }
  puts("");
}