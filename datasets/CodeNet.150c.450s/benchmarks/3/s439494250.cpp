#include <iostream>


void p(char *str, int a, int b) {
  for (int i = a; i <= b; i ++)
    std::cout << str[i];
  std::cout << std::endl;
}

void replace(char *str, int a, int b, char *replace_str) {
  for (int i = a; i <= b; i ++)
    str[i] = replace_str[i - a];
}

void reverse(char *str, int a, int b) {
  char temp;
  for (int i = 0; i < (b - a + 1) / 2; i ++) {
    temp = str[a + i];
    str[a + i] = str[b - i];
    str[b - i] = temp;
  }
}

int main() {
  char str[1000], replace_str[1000], command[100];
  int q, a, b;
  std::cin >> str >> q;

  for (int i = 0; i < q; i ++) {
    std::cin >> command >> a >> b;
    // std::cout << str << "\n\n";
    switch (command[2]) {
      case 'p':
        std::cin >> replace_str;
        replace(str, a, b, replace_str);
        break;
      case 'v':
        reverse(str, a, b);
        break;
      case 'i':
        p(str, a, b);
        break;
    }
    // std::cout << command << " " << a << " " << b << std::endl;
    // std::cout << str << std::endl;;
  }
  return 0;
}

