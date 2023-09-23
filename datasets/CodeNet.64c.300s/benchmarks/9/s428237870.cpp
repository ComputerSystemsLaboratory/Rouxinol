#include <iostream>

int main(void)
{
  const int kLoan = 100000;
  const double kInterestRate = 0.05;

  int n;
  std::cin >> n;

  int total = kLoan;
  for (int i = 0; i < n; i++) {
    total += kInterestRate * total;
    int mod = total % 1000;
    if (mod != 0) {
      total += 1000 - mod;
    }
  }

  std::cout << total << '\n';
  return 0;
}