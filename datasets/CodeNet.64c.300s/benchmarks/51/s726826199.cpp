#include <iostream>
#include <cstdio>
using namespace std;

long long int  factorial(int n) {
	if (n == 0) {
		return 1L;
	}
	else {
		return n * factorial(n - 1);
	}
}

int main()
{
	int n;
	cin >> n;

	cout << factorial(n) << endl;

	return 0;
}
