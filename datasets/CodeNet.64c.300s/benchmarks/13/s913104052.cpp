#include <iostream>
using namespace std;

int dp[50];

int fib(int n)
{
	if (n == 0 || n == 1) return dp[n] = 1;
	if (dp[n]) return dp[n];
	return dp[n] = fib(n - 1) + fib(n - 2);
}

int main()
{
	int n;
	cin >> n;
	cout << fib(n) << endl;

    return 0;
}

