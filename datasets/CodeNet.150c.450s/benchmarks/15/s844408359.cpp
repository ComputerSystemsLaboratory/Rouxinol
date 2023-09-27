#include <iostream>

int main () {

  int i, j, x, answer;
  int num_of_ary0, num_of_ary1;
  int ary0[10010];

  answer = 0;

  std::cin >> num_of_ary0;
  for (i = 0; i <= num_of_ary0 - 1; i++) std::cin >> ary0[i];

  std::cin >> num_of_ary1;
  for (i = 0; i <= num_of_ary1 - 1; i++) {

    std::cin >> x;

    for (j = 0; j <= num_of_ary0 - 1; j++) {

      if (x == ary0[j]) {

        answer ++;
        break;
      }
    }
  }

  std::cout << answer << std::endl;
  return 0;
}

