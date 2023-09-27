//Simultaneous Equation

#include <iostream>
#include <utility>
#include <cstdio>
#include <cassert>

namespace {

template <class T>
T GreatestCommonDivisor(T a, T b)
{
  // a must be less than b
  if (a > b) std::swap(a, b);

  while (a != 0) {
    T tmp = b % a;
    b = a;
    a = tmp;
  }

  return b;
}

template <class T>
T LeastCommonMultiple(T a, T b)
{
  // a must be less than b
  if (a > b) std::swap(a, b);

  T lcm = b;
  while (lcm % a != 0) {
    lcm += b;
  }

  return lcm;
}

} // unnamed namespace

int main()
{
  while (1) {
    long a, b;
    std::cin >> a >> b;
    if (std::cin.fail()) break;

    std::cout
      << GreatestCommonDivisor(a, b) << " "
      << LeastCommonMultiple(a, b) << std::endl;
  }

  return 0;
}