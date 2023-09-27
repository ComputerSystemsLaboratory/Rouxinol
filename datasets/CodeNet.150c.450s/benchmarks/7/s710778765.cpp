#include <iostream>

const int N = 10;

int main(void) {
  int a[N] = {0};

  for (int i = 0; i < N; i++) {
    std::cin >> a[i];
  }

  int three = 3;

  for (int i = 0; i < N; i++) {
    for (int j = i + 1; j < N; j++) {
      if (a[j] > a[i]) {
	int tmp = a[i];
	a[i] = a[j];
	a[j] = tmp;
      }
    }
  }

  for (int i = 0; i < three; i++) {
    std::cout << a[i] << std::endl;
  }
   
  return 0;
}