#include <iostream>
using namespace std;

int gcd(int in1, int in2);

int main() {
  int in1,in2;
  cin >> in1 >> in2;
  cout << gcd(in1,in2) << endl;
  return 0;
}

int gcd(int in1, int in2) {
  if(in1>in2) {
    int temp = in2;
    in2 = in1;
    in1 = temp;
  }

  int modulus = in2 % in1;
  if(modulus == 0)
    return in1;
  else
    return gcd(modulus,in1);
}