#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int GCD(int a, int b){
  if(b == 0)
    return a;
  return GCD(b, a % b);
}

void solve(int a, int b){
  if(a < b)
    swap(a, b);
  int gcd = GCD(a, b);
  cout << gcd << " " << a / gcd * b << endl;
}

int main(){
  int a, b;
  while(cin >> a >> b){
    solve(a, b);
  }
}