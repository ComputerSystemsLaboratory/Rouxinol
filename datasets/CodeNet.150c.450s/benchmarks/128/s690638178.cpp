#include <cstdio>
#include <cstring>

using namespace std;

int main() {
  char s[21];
  scanf("%s", s);
  for (int i=strlen(s)-1;i>=0;i--) putchar(s[i]);
  putchar('\n');
  return 0;
}