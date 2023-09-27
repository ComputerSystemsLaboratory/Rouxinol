#include <iostream>
using namespace std;
int memo[50];
int fib(int n)
{
	if(n == 0 || n == 1)	
		memo[n] = 1;
	
	if(memo[n] != 0)
	{
		return memo[n];
	}
	else 
	{
		memo[n] = fib(n - 1) + fib(n - 2);
		return memo[n];
	}
}

int main()
{
	int n;
	cin >> n;
	
	cout << fib(n) << endl;
	
	return 0;
}
