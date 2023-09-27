#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main() {
  int n;
  int in;
  int half_in;
  int num_prime = 0;
  bool isPrime = true;

  scanf("%d", &n);
  if(n < 1 || n > 10000) {
    printf("Error: n is out of range");
    return -1;
  }

  for(int i = 0; i < n; i++) {
    scanf("%d", &in);
    if(in < 2 || in > 10e8) {
      printf("Error: the input is out of range");
      return -1;
    }

    // check if is prime
    if(in == 2 || in == 3) {
      isPrime = true;
    }
    else if(in % 2 == 0) {isPrime = false;}
    else if(in % 2 != 0) {
      for(int i = 3; i <= sqrt(in); i += 2) {
        if(in % i == 0) {
          isPrime = false;
          break;
        }
      }
    }

    if(isPrime == false) {
      isPrime = true;
      continue;
    }
    else if(isPrime == true) {
      num_prime += 1;
      /* printf("is prime\n"); */
    }
  }

  printf("%d\n", num_prime);
}