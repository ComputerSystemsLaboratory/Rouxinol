#include <iostream>
using namespace std;

long long gcd(long long a, long long b) {
	if(b == 0) return a;
  else return gcd(b, a%b);
}

int main() {
  long long a, b;
  while(cin >> a >> b) {
    long long g = gcd(a, b);
    long long  l = a*b / g;
    cout << g << ' ' << l << endl;
  }
}