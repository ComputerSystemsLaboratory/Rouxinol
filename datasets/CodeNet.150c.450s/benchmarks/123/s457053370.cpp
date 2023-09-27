#include<iostream>
#include<math.h>

using namespace std;


bool isprime(int x) {
	int sqrtx = (int)sqrt(x);

	if (x == 2)return true;
	if (x < 2 || x % 2 == 0)return false;

	for (int i = 3; i <= sqrtx; i += 2) {
		if (x%i == 0)return false;
	}
	return true;
}

int main() {
	int n;
	int PrimeNum = 0;

	cin >> n;
	for (int i = 0; i < n; i++) {
		int Input;
		cin >> Input;
		if (isprime(Input))PrimeNum++;
	}

	cout << PrimeNum << endl;

	return 0;
}