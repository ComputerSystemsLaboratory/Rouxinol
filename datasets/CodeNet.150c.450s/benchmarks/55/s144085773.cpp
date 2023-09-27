#include <cctype>
#include <cstdio>
#include <cstring>
using namespace std;

int main(void)
{
  char input[1000];
  int i, len, sum;
  while (1) {
    scanf("%s", input);
    if (input[0] == '0') break;
    len = strlen(input);
    sum = 0;
    for (i = 0; i < len; i++) {
      sum += input[i] - '0';
    }
    printf("%d\n", sum);
  }
  return 0;
}