#include <iostream>

int fib(int, int[]);

int main()
{
	int n;
	const int size = 44;
	int memo[size + 1];

	for (int i = 0; i < size + 1; i++)
	{
		memo[i] = -1;
	}

	std::cin >> n;

	std::cout << fib(n, memo) << std::endl;

	return 0;
}

int fib(int n, int memo[])
{
	int ans;

	if (n == 0 || n == 1) {
		return 1;
	}
	else {
		if (memo[n] != -1) {
			return memo[n];
		}
		else {
			ans = fib(n - 1, memo) + fib(n - 2, memo);
			memo[n] = ans;
		}
	}

	return ans;
}	