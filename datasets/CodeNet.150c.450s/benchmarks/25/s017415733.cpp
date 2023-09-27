#include <cstdio>
#include <cctype>

int main() {
  char c;
  int sum[26] = {0};
  while (scanf("%c", &c) == 1) {
    if (!isalpha(c))
      continue;
    c = tolower(c);
    ++sum[c - 'a'];
  }
  for (int i = 0; i < 26; i++) {
    printf("%c : %d\n", i + 'a', sum[i]);
  }
  return 0;
}