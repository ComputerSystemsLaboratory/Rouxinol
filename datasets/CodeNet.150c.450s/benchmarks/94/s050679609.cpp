#include <iostream>

int main(){

  int i, num, count, index_last, temp;
  int ary[110];

  std::cin >> num;

  for (i = 0; i <= num - 1; i++) {
    std::cin >> ary[i];
  }

  count = 0;
  index_last = num - 2;

  while (index_last >= 0) {

    for (i = 0; i <= index_last; i++) {

      if (ary[i] > ary[i+1]){
        temp     = ary[i];
        ary[i]   = ary[i+1];
        ary[i+1] = temp;
        count++;
      }
    }
    index_last--;

  }

  for (i = 0; i <= num - 2; i++) std::cout << ary[i] << " ";
  std::cout << ary[num - 1] << std::endl;
  std::cout << count << std::endl;

  return 0;
}

