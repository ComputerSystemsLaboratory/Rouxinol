#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
  long num;
  long i;
  int flag  = 0;
  char buf[16];
  int num_of_prime=0;
  fgets(buf, 16, stdin);
  while (1) {
    flag  = 0;
    memset(buf, 0, 16);
    fgets(buf, 16, stdin);
    num = strtol(buf, NULL, 10);
    if (num == 0) {
      break;
    }


    for (i=2; i<=sqrt(num); i++) {
      if (num % i == 0) {
        flag  = 1;
        break;
      }
    }
    if (!flag) {
      num_of_prime++;
    }
  }
  printf("%d\n", num_of_prime);
  return 0;
}