#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

#define N 999999+1
int prime[N];
void sieve(int en) {
  // prime[prime number] = 0
  // prime[not prime number] = 1
  for(int i=2;i<=(int)sqrt(en);i++) {
    for(int j=i*2;j<=en;j+=i) {
      prime[j] = 1;
    }
  }
}

int main() {
  int n;
  int max_n = 2;
  while(cin >> n) {
    if(n > max_n) {
      sieve(n);
    }
    int cnt = 0;
    for(int i=2;i<=n;i++) {
      if(prime[i] == 0)
        cnt++;
    }
    cout << cnt << endl;
  }
}