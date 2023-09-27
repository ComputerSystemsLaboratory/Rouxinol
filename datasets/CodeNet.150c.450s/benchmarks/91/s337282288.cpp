#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>

struct IsPrime {
 public:
  explicit IsPrime(int max);
  bool operator()(int n);

 private:
  std::vector<bool> is_prime;
};

IsPrime::IsPrime(int max) : is_prime(max + 1, true) {
  is_prime[0] = false;
  is_prime[1] = false;
  for (auto i = 2; i <= std::sqrt(max); i++) {
    if (!is_prime[i]) {
      continue;
    }

    for (auto mult = 2 * i; mult <= max; mult += i) {
      is_prime[mult] = false;
    }
  }
}

bool IsPrime::operator()(int n) { return is_prime[n]; }

int CountPrime(IsPrime& is_prime, int upto) {
  int cnt = 0;
  for (int i = 2; i <= upto; i++) {
    if (is_prime(i)) {
      cnt++;
    }
  }
  return cnt;
}

int main(void) {
  std::vector<int> inputs;
  int n;
  while (std::cin >> n) {
    inputs.push_back(n);
  }

  int max = *std::max_element(inputs.begin(), inputs.end());
  IsPrime is_prime{max};

  for (auto n : inputs) {
    std::cout << CountPrime(is_prime, n) << '\n';
  }
  return 0;
}