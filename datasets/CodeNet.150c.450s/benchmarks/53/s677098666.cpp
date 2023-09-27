#include <iostream>
#include <cmath>
using namespace std;

long long div(long long n1) {
		for (long long i = 2; i <= sqrt(n1);) {
				if (n1 % i == 0) {
						return i;
				}
				else {
						i++;
				}
		}
		return -1;
}

int main() {
		long long n;
		cin >> n;

		cout << n << ":";

		while (1) {
				if(div(n) == -1) {
						cout << " " << n;
						break;
				}
				cout << " " << div(n);
				n = n / div(n);
				}

		cout << endl;

		return 0;
}