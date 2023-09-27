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
  bool flag = true;
  
  while (flag) {
    flag = false;

    for (int i = 1; i < n; i++) {
      if (a[i - 1] > a[i]) {
	int tmp = a[i - 1];
	a[i - 1] = a[i];
	a[i] = tmp;
	
	count++;
	flag = true;
      }
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