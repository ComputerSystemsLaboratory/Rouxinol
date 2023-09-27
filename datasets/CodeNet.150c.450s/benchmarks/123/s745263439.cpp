#include <iostream>
#include <cmath>
using namespace std;

bool isprime(int a)
{
	if (a == 2 || a == 3) return true;
	int len = round(sqrt(a)) + 1;
	for (int i = 2; i < len; i++) {
		if (a % i == 0) return false;
	}
	return true;
}

int main()
{
	int n;
	cin >> n;

	int a[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];

	int counter = 0;
	for (int i = 0; i < n; i++)
		if (isprime(a[i])) counter++;

	cout << counter << endl;
	return 0;
}