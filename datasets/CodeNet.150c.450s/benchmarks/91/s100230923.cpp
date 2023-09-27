#include <iostream>
using namespace std;

int main() {
  const int max = 1000000;
  int isPrime[max] = {1, 1, 0};
  int i = 2;
  int n, count;

  while(i < max) {
    while(isPrime[i] != 0) {
      i++;
    }
    for(n = 2; n*i < max; n++) {
      isPrime[n*i] = 1;
    }
    i++;
  }

  while(cin >> n) {
    count = 0;
    for(n; n > 0; n--) {
      if(isPrime[n] == 0) count++;
    }
    cout << count << endl;
  }

  return 0;
}