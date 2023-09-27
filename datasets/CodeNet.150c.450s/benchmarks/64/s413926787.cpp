#include <iostream>
#include <climits>

const int MAX_N = 20;
const int MAX_Q = 200;

bool test(int A[], int n, int x, int y, int z) {
  if (x == z) {
    return true;
  }

  if (y == n) {
    return false;
  }  

  return (test(A, n , x, y + 1, A[y] + z) || test(A, n , x, y + 1, z));
}

int main() {
  std::ios_base::sync_with_stdio(false);
  
  int n = 0;
  int q = 0;

  int A[MAX_N] = {0};
  int Q[MAX_Q] = {0};

  std:: cin >> n;

  for (int i = 0; i < n; i++) {
    std::cin >> A[i];
  }

  std::cin >> q;

  for (int i = 0; i < q; i++) {
    std::cin >> Q[i];
  }

  for (int i = 0; i < q; i++) {
    if (test(A, n, Q[i], 0, 0)) {
      std::cout << "yes" << std::endl;
    } else {
      std::cout << "no" << std::endl;
    }
  }

  return 0;
}