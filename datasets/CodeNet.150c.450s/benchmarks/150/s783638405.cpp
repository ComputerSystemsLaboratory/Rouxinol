#include <iostream>
#include <vector>

const int N_MAX = 10000;

int main(void) {
  std::ios_base::sync_with_stdio(false);

  int n = 0;

  std::cin >> n;

  std::vector<int> *v = new std::vector<int>(N_MAX + 1, -1);

  for (int i = 0; i < n; i++) {
    int a = 0;

    std::cin >> a;

    if (v->at(a) < 0) {
      v->at(a) = 0;
    }
    
    v->at(a) += 1;
  }

  bool printFirst = true;

  for (int i = 0; i <= N_MAX; i++) {
    if (v->at(i) < 0) {
      continue;
    }

    if (!printFirst) {
      std::cout << " ";
    }
    
    for (int j = 0; j < v->at(i); j++) {
      if (j != 0) {
	std::cout << " ";
      }
      
      std::cout << i;
    }

    printFirst = false;
  }

  std::cout << std::endl;
  
  return 0;
}