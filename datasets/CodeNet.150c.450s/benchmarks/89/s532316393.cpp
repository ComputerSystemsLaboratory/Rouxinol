#include <iostream>
#include <vector>

using namespace std;

bool isPrime(int x)
{
	if (x == 1) { return false; }
	if (x == 2) { return true; }
	if (x % 2 == 0) { return false; }

	for (int i = 3; i * i <= x; i +=2) {
		if (x % i == 0) {
			return false;
		}
	}

	return true;
}

int main()
{
	while (1) {
		int a, d, n;
		cin >> a >> d >> n;

		if (a == 0 && d == 0 && n == 0) {
			break;
		}

		int count = 0;
		for (int i = a; count < n; i += d) {
			if (isPrime(i)) {
				++count;
				if (count == n) {
					cout << i << endl;
					break;
				}
			}
		}
	}

	return 0;
}