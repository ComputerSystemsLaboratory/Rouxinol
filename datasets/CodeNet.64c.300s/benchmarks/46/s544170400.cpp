#include <iostream>
#include <cstring>
using namespace std;

bool sieve[1000000];

int a, d, n;

void solve() {
  int count = 0, res;
  while (true) {
    if (sieve[a]) {
      count++;
      if (count == n) {
        res = a;
        break;
      }
    }
    a += d;
  }
  cout<<res<<endl;
}

int main (int argc, char const* argv[]) {
  // set sieve
  memset(sieve, true, sizeof sieve);
  sieve[0] = sieve[1] = false;
  for(int i=4;i<1000000;i+=2) sieve[i] = false;

  for(int i=3;i<1000000;i+=2)
  if (sieve[i])
  for(int j=i+i;j<1000000;j+=i)
  if (sieve[j]) sieve[j] = false;
    
  while (cin>>a>>d>>n, a||d||n) {
    solve();
  }
  
  return 0;
}