#include <iostream>
#include <cmath>

int gcd(long unsigned int a, long unsigned int b) {
	// assuming a > b
	if (a % b == 0)
		return b;

	return gcd(b, a%b);
}

bool is_prime(long unsigned int n) {
	for (long unsigned int i = 2; i < n; i++) 
		if (gcd(n, i) != 1)
			return false;
	return true;
}


bool is_prime_A(long unsigned int n) {
	for (long unsigned int i = 2; i <= std::sqrt(n); i ++)
		if (gcd(n, i) != 1)
			return false;
	return true;
}


bool is_prime_E(long unsigned int n) {
	return true;
}

int main() {

	{
		using namespace std;
		
		long unsigned int n;
		cin >> n;

		int c = 0;
		for (long unsigned int i = 0; i < n; i++) {
			long unsigned int a;
			cin >> a;
			if (is_prime_A(a))
				c++;
		}
		cout << c << endl;
	}

	return 0;
}