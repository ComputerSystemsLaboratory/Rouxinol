#include <bits/stdc++.h>

int main() {

  int left, right;
  char key[10][10] = {
    {},
    {'.', ',', '!', '?', ' '},
    {'a', 'b', 'c'},
    {'d', 'e', 'f'},
    {'g', 'h', 'i'},
    {'j', 'k', 'l'},
    {'m', 'n', 'o'},
    {'p', 'q', 'r', 's'},
    {'t', 'u', 'v'},
    {'w', 'x', 'y', 'z'}
  };

  int size[10] = {0, 5, 3, 3, 3, 3, 3, 4, 3, 4};
  int N;
  char str[1024];
  
  std::cin >> N;
  
  for(int t = 0; t < N; ++t) {  
    scanf("%s", str);

    std::vector<char> buffer;
    int n = strlen(str);
  
    left = right = 0;
    for(int i = 0; right <= n; ++right) {
      if( str[left] != str[right] ) {
        if( str[left] != '0' ) {
          buffer.push_back(key[str[left] - '0'][(right-left-1)%size[str[left]-'0']]);
        }
        left = right;
      }
    }
    buffer.push_back('\0');

    std::cout << &buffer[0] << std::endl;
    buffer.clear();
  }
  
  return 0;
}