#include <iostream>
using namespace std;

int fib(int n, int a, int b);

int main()
{
	int n;
	cin >> n;
	cout << fib(n - 1, 1, 1) << endl;
	return (0);
}


int fib(int n, int a, int b){
	int f;
	f = a;
	if (n >= 1){
		f = fib(n - 1, a + b, a);
  }
	return (f);
}