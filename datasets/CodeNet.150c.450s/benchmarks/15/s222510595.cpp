#include <iostream>

int main () {

  int i, j, key, answer;
  int size_of_ary, num_of_keys;
  int ary[10010];

  answer = 0;

  std::cin >> size_of_ary;
  for (i = 0; i <= size_of_ary - 1; i++) std::cin >> ary[i];

  std::cin >> num_of_keys;
  for (i = 0; i <= num_of_keys - 1; i++) {

    std::cin >> key;

    for (j = 0; j <= size_of_ary - 1; j++) {

      if (key == ary[j]) {

        answer ++;
        break;
      }
    }
  }

  std::cout << answer << std::endl;
  return 0;
}

