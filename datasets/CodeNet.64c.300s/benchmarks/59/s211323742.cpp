#include <iostream>
#include <math.h>
using namespace std;

int Myprime(int x)
{
	for (int i = 2; i <= sqrt(x); i++)
		if (!(x % i)) return 0;
	return 1;
}

int main()
{
	int n, count = 0, x;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> x;
		count += Myprime(x);
	}
	cout << count << "\n";
	return 0;
}