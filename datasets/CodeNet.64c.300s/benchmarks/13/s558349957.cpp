#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<vector>
#include<string>

using namespace std;

int fib(int n)
{
	int fibarray[45];
	for (int i = 0; i < n; i++)
	{
		fibarray[i] = 0;
	}
	fibarray[0] = 1;
	fibarray[1] = 1;

	for (int i = 2; i <= n; i++)
	{
		fibarray[i] = fibarray[i - 1] + fibarray[i - 2];
	}

	return fibarray[n];
}

int main()
{
	int n;
	cin >> n;

	cout << fib(n) << endl;

	return 0;
}