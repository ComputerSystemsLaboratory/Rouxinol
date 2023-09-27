#include <cstdio>
#include <iostream>

using namespace std;

int F[50];

int fib(int n) {

	if (n == 0 || n == 1)
		return 1;
	if (F[n] != 0)
		return F[n];

	F[n] = fib(n - 1) + fib(n - 2);

	return F[n];
}

int main() {

	int n;
	scanf("%d", &n);

	for (int i = 0; i < n; ++i) {
		F[i] = 0;
	}

	cout << fib(n) << endl;

	return 0;

}