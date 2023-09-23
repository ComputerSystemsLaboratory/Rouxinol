#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

bool isPrime(int x) {
  if(x == 2) return true;
  if(x < 2 || !(x % 2)) return false;
  int i = 3;
  while(i <= sqrt(x)) {
    if (!(x % i)) return false;
    i += 2;
  }
  return true;
}

int main(void) {
  int A[10000],n;
  cin >> n;
  for(int i=0;i<n;i++) cin >> A[i];
  int prime = 0;
  for(int i=0;i<n;i++)
    if(isPrime(A[i])) prime++;
  cout << prime << '\n';

  return 0;
}