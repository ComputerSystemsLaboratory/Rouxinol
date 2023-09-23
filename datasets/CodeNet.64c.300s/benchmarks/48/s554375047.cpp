#include <iostream>
#include <cmath>

#define MAX_NUM (1000000)

int main(void)
{
  static bool searchList[MAX_NUM];
  static bool isPrime[MAX_NUM];
  static int primeNum[MAX_NUM];
  
  double maxSq = sqrt((double)(MAX_NUM - 1));
  
  for (int i = 2; i <= maxSq + 1; i++) {
    if (!searchList[i]) {
      isPrime[i] = true;
      for (int j = 2; j < MAX_NUM; j++) {
        if (j % i == 0) {
          searchList[j] = true;
        }
      }
    }
  }
  
  for (int i = maxSq + 2; i < MAX_NUM; i++) {
    if (!searchList[i]) {
      isPrime[i] = true;
    }
  }
  
  
  for (int i = 2; i < MAX_NUM; i++) {
    primeNum[i] = isPrime[i] ? primeNum[i - 1] + 1 : primeNum[i - 1];
  }
  
  int n;
  while (std::cin >> n) {
    std::cout << primeNum[n] << std::endl;
  }
  
  return 0;
}