#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int f(int x)
{
	return pow(x, 2);
}

int main()
{
	int n;
	while (cin >> n) {
		long long int sum = 0;
		for (int i = n; i <= 600 - n; i += n)
			sum += f(i)*n;
		cout << sum << endl;
	}
	return 0;
}