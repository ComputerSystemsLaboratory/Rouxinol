#include <iostream>
#include <vector>

int main(int argc, char const* argv[])
{
  while (true) {
    int N, M, P;
    std::cin >> N >> M >> P;
    if (N == 0 && M == 0 && P == 0)
      break;
    std::vector<int> X(N);
    double pool = 0.0;
    for (int i = 0; i < N; ++i) {
      std::cin >> X[i];
      pool += X[i] * 100;
    }
    if (X[M - 1] == 0) {
      std::cout << 0 << std::endl;
    } else {
      double for_divide = pool - ((double)P / 100.0) * pool;
      std::cout << (int)(for_divide / X[M - 1]) << std::endl;
    }
  }
  return 0;
}