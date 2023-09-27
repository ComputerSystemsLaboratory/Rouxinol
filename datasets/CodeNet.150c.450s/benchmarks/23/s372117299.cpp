#include <iostream>

using namespace std;

int ans[45] = {};

int fib(int n) {
	if (n <= 1) return 1;
	int a = ans[n];
	if (a) return a;
	a = fib(n-1) + fib(n-2);
	ans[n] = a;
	return a;
}

int main()
{
	int i = 0;
	cin >> i;
	cout << fib(i) << endl;
}