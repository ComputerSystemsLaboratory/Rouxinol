#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
	int n;
	while(true) {
		cin >> n;
		if (n == 0) {
			break;
		}

		int count = 0;
		for (int i = 2; i <= n*2 / i; i += 2) {
			if(n % i != 0 && n*2 % i == 0) {
				int centerMinusHalf = n / i;

				if(centerMinusHalf + 1 - i / 2 > 0) {
					count++;
				}
			}
		}
		for (int i = 3; i <= n*2 / i; i += 2) {
			if(n % i == 0) {
				int center = n / i;

				if(center - i / 2 > 0) {
					count++;
				}
			}
		}

		cout << count << endl;
	}
	return 0;
}