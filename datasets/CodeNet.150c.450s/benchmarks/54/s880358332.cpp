#include <iostream>


int strlen (char *str) {
  int len = 0;
  while (*str != '\0') {
    str++;
    len++;
  }
  return len;
}


bool strcmp(char *s, char *p, int size) {
  int ascii_sub;
  for (int i = 0; i < size; i ++) {
    ascii_sub = (int)s[i] - (int)p[i];
    if (ascii_sub != -32 && ascii_sub != 32 && s[i] != p[i]) return false;
  }
  return true;
}

bool strcmp(char *s, char *p) {
  for (int i = 0; i < 11; i ++) {
    if (s[i] != p[i]) return false;
  }
  return true;
}


int main() {
  int count = 0;
  char end[11] = {'E', 'N', 'D', '_', 'O', 'F', '_', 'T', 'E', 'X', 'T'};
  int end_len = 11;
  char W[10];
  int W_len;
  char word[255];
  int word_len;

  std::cin >> W;
  W_len = strlen(W);

  while (true) {
    std::cin >> word;
    word_len = strlen(word);
    if (W_len == word_len && strcmp(word, W, W_len)) count += 1;
    if (end_len == word_len && strcmp(word, end)) break;
  }
  std::cout << count << std::endl;

  return 0;
}

