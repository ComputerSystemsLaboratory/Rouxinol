#include <iostream>
#include <cmath>
#define MAX_N 100001
using namespace std;

bool isPrime(int n) {
  if (n == 0 || n == 1) return false;
  if (n == 2 || n == 3) return true;
  if (n % 2 == 0) return false;
  for (int i = 5; i <= sqrt(n); i += 2) {
    if (n % i == 0) return false;
  }
  return true;
}

int main() {
  int n;
  cin >> n;
  int nc = n;
  cout << n << ':';
  if (isPrime(n) == true) {
    cout << ' ' << n << endl;
    return 0;
  }
  for (int i = 2; i <= nc; i++) {
    if (isPrime(i) == false) continue;
    if (nc % i) continue;
    while (nc % i == 0) {
      cout << ' ' << i;
      nc /= i;
    }
  }
  cout << endl;

  return 0;
}