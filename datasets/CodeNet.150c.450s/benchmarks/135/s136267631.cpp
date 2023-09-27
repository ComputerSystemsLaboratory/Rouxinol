#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>

std::vector<int> count(int N) {
  std::vector<int> values(N);
  for (int i = 0; i < N; i++) {
    std::cin >> values[i];
  }
  std::vector<int> ret(1500000);
  for (int i = 0; i < N; i++) {
    int sum = 0;
    for (int j = i; j < N; j++) {
      sum += values[j];
      ret[sum]++;
    }
  }
  return ret;
}

int solve(int N, int M) {
  auto N_values = count(N);
  auto M_values = count(M);
  int sum = 0;
  for (int i = 0; i < N_values.size(); i++) {
    sum += N_values[i] * M_values[i];
  }
  return sum;
}

int main() {
  int N, M;
  while(std::cin >> N >> M) {
    if (N == 0 && M == 0) {
      break;
    }
    std::cout << solve(N, M) << std::endl;
  }
}