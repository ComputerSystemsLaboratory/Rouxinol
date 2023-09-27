#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

bool prime_table[100000001];

bool is_prime(int n){
  for(int i = 2; i * i <= n; i++){
    if(n%i==0) return false;
  }
  return n != 1;
}

int main() {
  int n, tmp;
  cin >> n;
  int count = 0;
  for (int i = 0; i < n; i++) {
      cin >> tmp;
      if(is_prime(tmp)) count++;
  }
  cout << count << endl;
  return 0;
}