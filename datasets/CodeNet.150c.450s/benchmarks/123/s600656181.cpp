#include <iostream>
#include <algorithm>
using namespace std;

bool is_prime(int n) {
  // naive program
  int p = 2;
  while(p*p <= n) {
    if(n % p == 0) {
      return false;
    }
    p++;
  }
  return true;
}

int main() {
  int N;
  int cnt = 0;

  cin >> N;
  for(int i=0;i<N;i++) {
    int n;
    cin >> n;
    if(is_prime(n)) {
      cnt++;
    }
  }
  cout << cnt << endl;
}