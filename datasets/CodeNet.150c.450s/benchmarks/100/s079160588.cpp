#include <iostream>
using namespace std;

unsigned long long factorial(int x) {

  if(x != 1)
    return x * factorial(x-1);
  else if(x == 1)
    return 1;
}

int main() {
  int a;
  cin >> a;
  cout << factorial(a) << endl;
  return 0;
}