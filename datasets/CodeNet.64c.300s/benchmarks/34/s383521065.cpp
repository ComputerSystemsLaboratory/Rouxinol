#include <iostream>

const int N = 100;

void print_array(const int *a, const int n) {
  for (int i = 0; i < n; i++) {
    std::cout << a[i];

    if (i < (n - 1)) {
      std::cout << " ";
    }
  }

  std::cout << std::endl;
}

int main() {
  int n = 0;
  int a[N] = {0};

  std::cin >> n;

  for (int i = 0; i < n; i++) {
    std::cin >> a[i];
  }

  for (int i = 1; i < n; i++) {
    print_array(a, n);
    
    int v = a[i];
    int j = i - 1;

    while ((j >= 0) && a[j] > v) {
      a[j + 1] = a[j];
      j--;
    }

    a[j + 1] = v;
  }
  
  print_array(a, n);

  return 0;
}