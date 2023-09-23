#include <iostream>

int main() {

  int i, j, num, count, min, min_index, temp;
  int ary[110];

  std::cin >> num;

  for (i = 0; i <= num - 1; i++) std::cin >> ary[i];

  count = 0;

  for (i = 0; i <= num - 2; i++) {

    min       = ary[i];
    min_index = i;

    for (j = i; j <= num - 1; j++) {

      if (min > ary[j]) {

        min       = ary[j];
        min_index = j;

      }
    }

    if (ary[i] != ary[min_index]) {

      temp           = ary[i];
      ary[i]         = ary[min_index];
      ary[min_index] = temp;

      count ++;
    }
  }

  for (i = 0; i <= num - 2; i++) std::cout << ary[i] << " ";
  std::cout << ary[num - 1] << std::endl;
  std::cout << count << std::endl;

  return 0;
}

