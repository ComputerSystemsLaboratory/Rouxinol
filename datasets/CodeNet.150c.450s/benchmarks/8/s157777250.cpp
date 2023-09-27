#include <iostream>


enum{
  LOSE,
  DRAW,
  WIN,
};


int strlen (char *str) {
  int len = 0;
  while (*str != '\0') {
    str++;
    len++;
  }
  return len;
}


int strcmp(char *s, char *p, int size) {
  int ascii_sub;
  bool sb, pb;
  for (int i = 0; i < size; i ++) {
    ascii_sub = (int)s[i] - (int)p[i];
    if (ascii_sub > 0) return WIN;
    else if (ascii_sub < 0) return LOSE;
    sb = s[i] == '\0';
    pb = p[i] == '\0'; 
    if (sb || pb) {
      if (sb && !pb)  return LOSE;
      else if (!pb && sb) return WIN;
      else return DRAW;

    }

  }
  return DRAW;
}


int main() {
  int n, length;
  char taro[101], hanako[101];
  int taro_point = 0, hanako_point = 0;
  int result;
  std::cin >> n;
  for (int i = 0; i < n; i ++) {
    std::cin >> taro >> hanako;
    result = strcmp(taro, hanako, 100);
    taro_point += result == WIN ? 3 : result;
    hanako_point += result == LOSE ? 3 : (result % 2);
    //std::cout << taro << " " << hanako << " " << result << "\n";
  }
  std::cout << taro_point << " " << hanako_point << std::endl;
  return 0;
}

