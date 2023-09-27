#include <iostream>
using namespace std;

bool isPrime(unsigned int n) {
  unsigned int count=0;
  unsigned int max;
  count = 0;
  max = n;

  for(int i=2; i<max; i++) {
    if(n%i==0) return false;
    max = n/i;
  }
  return true;
}

int main() {
  unsigned int input;
  unsigned int count;
  unsigned int cum[500000]; // for odd numbers greater than or equal to 1

  count = 1; // For 2
  cum[0] = 0; // For 1
  cum[1] = 2; // For 3
  for(int i= 2; i<500000; i++) {
    if(isPrime(2*i+1)) {
      cum[i] = cum[i-1]+1;
      count++;
    } else {
      cum[i]=cum[i-1];
    }
  }

  while(cin >> input) {
    count = 0;
    if(input==2)
      cout << "1" << endl;
    else
      cout << cum[(int)(input-0.5)/2] << endl;
  }

  return 0;
}