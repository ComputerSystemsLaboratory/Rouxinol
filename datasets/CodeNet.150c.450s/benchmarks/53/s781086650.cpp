// ?´??????°????§£

#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int x) {
  if(x == 2) return true;

  if(x < 2 || x % 2 == 0) return false;

  int i = 3;
  while(i <= sqrt(x)) {
	if(x % i == 0) return false;
	i += 2;
  }
  return true;
}

int main() {
  int n;
  cin >> n;
  cout << n << ":";

  while(n > 1) {
    for(int i = 2; i <= 50847534; ++i) {
      if(isPrime(n)) {
        cout << " " << n;
        n /= n;
        break;
      }
      if(isPrime(i) && n % i == 0) {
        n /= i;
        cout << " " << i;
        break;
      }
    }
  }
  cout << endl;

  return 0;
}