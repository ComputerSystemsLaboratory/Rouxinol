#include<iostream>
#include<string>
#include<stdlib.h>
#include<stdio.h>
#include<vector>
#include<algorithm>
#include<deque>
using namespace std;
long long int memo[45];
long long int fib(int n)
{
	if (n < 0)return 0;
	if (memo[n] != -1500)return memo[n];
	if (n == 0 || n == 1)return 1;
	long long int ans = 0;
	ans += fib(n - 1) + fib(n - 2);

	return memo[n]=ans;
	
}

int main()
{
	int n; cin >> n; for (int i = 0; i < 45; i++)memo[i] = -1500;
	cout << fib(n) << endl;
}