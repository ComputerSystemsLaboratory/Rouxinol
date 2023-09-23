#include <iostream>
#include <cmath>

#define SIZE 10000

using namespace std;

bool isPrime(int);

int main(void) {
	int n, list[SIZE];
	int count = 0;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> list[i];
	}

	for (int i = 0; i < n; i++) {
		if (isPrime(list[i])) {
			count++;
		}
	}

	cout << count << "\n";
	cin >> n;
	return 0;
}

bool isPrime(int n) {
	if (n < 2) {
		return false;
	}
	else if (n == 2) {
		return true;
	}
	else if (n % 2 == 0) {
		return false;
	}
	else {
		int max = sqrt(n);
		for (int i = 3; i <= max; i += 2) {
			if (n%i == 0) {
				return false;
			}
		}
		return true;

	}

}