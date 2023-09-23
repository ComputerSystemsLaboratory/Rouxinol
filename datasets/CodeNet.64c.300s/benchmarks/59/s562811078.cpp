#include <iostream>
#include <math.h>
using namespace std;

bool is_prime (long x) {
  long d = ceil(sqrt(x));
  if (x == d) d--;
  while (d>1 && (x%d)!=0) {
    d--;
  }
  return (d==1);
}

int main (int argc, char **argv) {
  int N;
  cin >> N;

  long x;
  int count = 0;
  for (int i=0;i<N;i++) {
    cin >> x;
    if (is_prime(x)) count++;
  }
  cout << count << endl;
} 