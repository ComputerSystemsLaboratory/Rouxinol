#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
  int n, i;
  int min = 1000000;
  int max = -1000000;
  long sum = 0;
  cin >> n;
  while (n > 0) {
    cin >> i;
    if (i < min) min = i;
    if (i > max) max = i;
    sum += i;
    n--;
  }
  printf("%d %d %ld\n", min, max, sum);
  return 0;
}