
#include <iostream>
#include <map>

#define INPUT_MAX 10000
#define NUM_MAX 100000000


int main(int argc, const char * argv[]) {
  int x, y;
  int other, amari;
  int temp_amari;
  int divisor;
  divisor = 0;
  std::cin >> x >> y;
  if (x > y) {
    amari = x % y;
    other = y;
  } else {
    amari = y % x;
    other = x;
  }
  
  while (amari != 0) {
    temp_amari = other % amari;
    other = amari;
    amari = temp_amari; 
  }
  std::cout << other << std::endl;
  
  return 0;
}