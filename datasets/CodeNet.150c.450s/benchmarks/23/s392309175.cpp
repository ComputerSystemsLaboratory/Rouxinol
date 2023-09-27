#include<iostream>

using namespace std;

unsigned long memo[50] = {};

int fib(int n) {
	if (n == 0 || n == 1)return 1;
	if (memo[n] != 0) {
		return memo[n];
	}
	return memo[n] = fib(n - 1) + fib(n - 2);
}
int main() {
	int n;

	cin >> n;

	cout << fib(n) << endl;

	return 0;
}
