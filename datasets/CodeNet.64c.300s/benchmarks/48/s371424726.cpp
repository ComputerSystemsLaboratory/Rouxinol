#include <iostream>
#include <algorithm>
using namespace std;

const int C = (int)1e7+10;

bool isprime[C];
int prime[C];

void init() {
  fill(isprime, isprime+C, true);
  isprime[0] = isprime[1] = false;
  for (auto i=2; i<C; i++) {
    if (isprime[i]) {
      for (auto j=2; i*j<C; j++) {
	isprime[i*j] = false;
      }
    }
  }
  prime[0] = 0;
  for(auto i=1; i<C; i++) {
    prime[i] = ((isprime[i]) ? prime[i-1]+1 : prime[i-1]);
  }
}

int main() {
  init();
  int n;
  while (cin >> n) {
    cout << prime[n] << endl;
  } 
}