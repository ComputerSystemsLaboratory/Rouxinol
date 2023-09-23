#include <iostream>

using namespace std;

int main() {
  unsigned long long n;
  cin >> n;
  unsigned long long fac=1;
  while(n) {
    fac*=n;
    n--;
  }
  cout << fac << endl;
}