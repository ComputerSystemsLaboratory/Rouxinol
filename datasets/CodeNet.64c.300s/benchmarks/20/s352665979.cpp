#include<iostream>
using namespace std;

int main() {
  int d, e, sum;
  while(cin >> d)
    {
      sum = 0;
      for(e = d; e < 600; e += d) sum += e*e;
      sum *= d;
      cout << sum << endl;
    }
  return 0;
}