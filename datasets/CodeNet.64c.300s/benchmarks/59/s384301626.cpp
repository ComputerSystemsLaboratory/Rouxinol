#include <iostream>
#include <math.h>

using namespace std;

int N;

bool isPrime(int a) {
  if (a == 2) 
    return true;
  if (a % 2 == 0)
    return false;

  for (int i = 3; i <= sqrt(a); i += 2) {
    if (a % i == 0) 
      return false;
  }

  return true;
}

int main() {
  cin >> N;
  
  int count = 0;
  for (int i = 0; i < N; i++) {
    int a;
    cin >> a;
    if (isPrime(a))
      count++;
  }
  
  cout << count << endl;

  return 0;
}