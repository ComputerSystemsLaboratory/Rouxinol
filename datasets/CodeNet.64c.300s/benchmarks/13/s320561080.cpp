#include <iostream>

using namespace std;

int N;
unsigned long memo[50] = {};

unsigned long fibo(unsigned n)
{
	if (n <= 1) return 1;
	if (memo[n] == 0) {
		memo[n] = fibo(n - 1) + fibo(n - 2);
	}
	return memo[n];
}

int main()
{
	cin >> N;

	cout << fibo(N) << endl;

	return 0;
}

