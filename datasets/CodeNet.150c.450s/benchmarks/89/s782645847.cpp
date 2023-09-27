#include <bits/stdc++.h>
using namespace std;

bool is_prime(int num) {
  if (num <= 1) return false; 
  if (num == 2) return true;
  if (num % 2 == 0) return false;
  int square = sqrt(num) + 2;
  for(int i = 3; i <= square; i = i + 2) {
    if(num % i == 0) return false;
  }
  return true;
}

int prime(int a, int d, int n)
{
  int sum = a;
  int count = 0;
  
  while(true) {
    if(is_prime(sum)) count++;
    if(n == count) return sum;
    sum += d;
  }
}
  
int main() {
  int a, d, n;
  while(true) {
    cin >> a >> d >> n;
    if(a * d * n == 0) break;
    cout << prime(a, d, n) << endl;
  }
  return 0;
}