#include <iostream>
using namespace std;

int Fib(int n) {

	long a[50] = { 1, 1 };

	if (n > 1) {
		for (int i = 2; i <= n; i++)
			a[i] = a[i - 1] + a[i - 2];
		return a[n];
	}
	else
		return 1;
}

int main()
{
	int n = 0;

	cin >> n;

	cout << Fib(n) << endl;

	return 0;
}
