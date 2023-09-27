#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	unsigned long n = 0;

	cin >> n;

	cout << n << ":";

	for (unsigned long i = 2; i <= sqrt(n); i++) {
		while (n % i == 0) {
			cout << " " << i;
			n /= i;
		}
	}

	if(n > 1)
		cout << " " << n;

	cout << endl;

	return 0;
}