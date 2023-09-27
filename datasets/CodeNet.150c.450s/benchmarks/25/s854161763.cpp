#include <cctype>
#include <cstdio>
#include <cstring>
using namespace std;

int main(void)
{
  char input;
  int counter[26] = {};
  int i, len, sum, idx;
  while (scanf("%c", &input) != EOF) {
    if (islower(input)) idx = input - 'a';
    else if  (isupper(input)) idx = input - 'A';
    else continue;
    counter[idx]++;
  }
  for (i = 0; i < 26; i++) {
    printf("%c : %d\n", int ('a' + i), counter[i]);
  }
  return 0;
}