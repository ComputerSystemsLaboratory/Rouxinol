#include <iostream>
#include <cmath>
using namespace std;

int N, A[10000];

bool isPrimeNumber(int x) {
  if (x == 2) return true;
  if (x % 2 == 0) return false;
  for (int i = 3; i <= sqrt(x); i += 2) {
    if (x % i == 0) return false;
  }
  return true;
}

int main(void){
  cin >> N;
  
  int cnt = 0, x;
  for (int i = 0; i < N; i++) {
    cin >> x;
    if (isPrimeNumber(x)) cnt++;
  }
  cout << cnt << endl;
}