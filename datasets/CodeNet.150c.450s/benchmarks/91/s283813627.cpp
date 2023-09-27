#include <iostream>
#include <vector>
#include <set>
#include <cmath>
std::vector<int> PRIMES;

void init_primes(int max)
{
  if (max < 2) return;
  std::set<int> candidate;
  PRIMES.push_back(2);
  for (int i = 3; i < max; i+=2) {
    candidate.insert(i);
  }
  for (int i = 3; i < sqrt(max); i+=2) {
    std::set<int>::iterator it = candidate.find(i);
    if (it != candidate.end()) {
      PRIMES.push_back(i);
      int del_num = i;
      while (del_num < max) {
        it = candidate.find(del_num);
        if (it != candidate.end()) candidate.erase(it);
        del_num += i;
      }
    }
  }
  for (std::set<int>::iterator it = candidate.begin();
       it != candidate.end(); ++it) {
    PRIMES.push_back(*it);
  }
}

int main()
{
  const int max = 1000000;
  init_primes(max);
  int i;
  while (std::cin >> i) {
    std::vector<int>::iterator it = PRIMES.begin();
    int n = 0;
    while (*it <= i && it != PRIMES.end()) {
      n++;
      it++;
    }
    std::cout << n << std::endl;
  }
  return 0;
}