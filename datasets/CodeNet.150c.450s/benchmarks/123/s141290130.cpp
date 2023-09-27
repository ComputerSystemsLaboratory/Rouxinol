#include <iostream>
#include <cmath>

const int MAX_N = 10000;

int main() {
  int n = 0;
  int numbers[MAX_N] = {0};

  std::cin >> n;

  int count = n;

  for (int i = 0; i < n; i++) {
    int x = 0;

    std::cin >> x;

    if (x == 2) {
      continue;
    }
     
    if ((x > 2) && ((x % 2) == 0)) {
      count--;
    } else {
      numbers[i] = x;
    }
  }

  for (int i = 0; i < n; i++) {
    if (numbers[i] == 0) {
      continue;
    }
    
    int v = numbers[i];
    int max = std::sqrt(v);

    for (int j = 3; j <= max; j += 2) {
      if ((v % j) == 0) {
	count--;
	numbers[i] = 0;
	  
	break;
      }
    }
  }

  // for (int i = 0; i < n; i++) {
  //   std::cout << numbers[i] << std::endl;
  // }

  std::cout << count << std::endl;
  
  return 0;
}