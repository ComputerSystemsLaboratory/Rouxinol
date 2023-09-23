#include<iostream>
#include<cmath>

using namespace std;

bool check_prime(int n) {
	if (n % 2 == 0) {
		if (n != 2)return false;
	}

	int r = sqrt(n);
	for (int i = 2; i <= r; i++) {
		if (n%i == 0) {
			return false;
		}
	}

	return true;;
}

int main() {
	int n,counter = 0;
	cin >> n;
	while (n--) {
		int a;cin >> a;
		if (check_prime(a)) counter++;
	}
	cout << counter << endl;
	return 0;
}