#include <iostream>
#include <math.h>

using namespace std;


bool isPrime(int a) {
  int squared = sqrt(a);
  for (int i = 2; i <= squared; ++i) { // only need to test up to squareroot
    if (a % i == 0) {
      return false;
    }
  }
  return true;
}

int main() {

  int n; // number of inputs

  cin >> n;

  int prime_count = 0;
  
  for (int i = 0; i < n; ++i) {
    int input;
    cin >> input;
    if (isPrime(input)) ++prime_count;
  }
  
  cout << prime_count << endl;
  
}