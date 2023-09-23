#include<algorithm>
#include<iostream>
using namespace std;

int fib[44],n;
int main() {
  fib[0] = 1;
  fib[1] = 1;
  for (int i = 1; i <= 44; ++i) {
	if (i >= 2) fib[i] = fib[i-1] + fib[i-2];
	}
	cin >> n;
	cout << fib[n] << endl;
	}