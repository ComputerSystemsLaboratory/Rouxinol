#include <iostream>
using namespace std;

int main() {
  int n;
  long long x = 1;
  cin >> n;
  for (int i=2; i<=n; i++) {
    x *= i;
  }
  cout << x << endl;
}