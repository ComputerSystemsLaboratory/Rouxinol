#include <iostream>

const int N = 100;

int main() {
  int n = 0;
  int a[N] = {0};

  std::cin >> n;

  for (int i = 0; i < n; i++) {
    std::cin >> a[i];
  }

  int count = 0;

  
  for (int i = 0; i < n; i++) {
    int min = i;
    
    for (int j = i + 1; j < n; j++) {
      if (a[j] < a[min]) {
	min= j;
      }
    }
    
    if (a[min] < a[i]) {
      int tmp = a[min];
      a[min] = a[i];
      a[i] = tmp;

      count++;
    }
  }

  for (int i = 0; i < n; i++) {
    std::cout << a[i];

    if (i < (n - 1)) {
      std::cout << " ";
    } else {
      std::cout << std::endl;
    }
  }

  std::cout << count << std::endl;
  
  return 0;
}