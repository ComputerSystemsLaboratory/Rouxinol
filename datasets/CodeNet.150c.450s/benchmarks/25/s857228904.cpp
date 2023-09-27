#include <cstdio>
#include <cstring>
#include <cctype>

int main(){
  char c;
  int list[50] = {0};

  while (scanf("%c", &c) != EOF) {
    if (isalpha(c)) {
      c = tolower(c);
      list[c - 'a']++;
    }
  }

  for (int i = 0; i < 26; i++) {
    printf("%c : %d\n", i + 'a', list[i]);
  }

  return 0;
}
