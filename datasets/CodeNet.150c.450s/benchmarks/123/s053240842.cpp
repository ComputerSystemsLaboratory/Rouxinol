#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n, num, count = 0;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> num;
		if (num == 2) {
			count++;
			continue;
		}

		for (int j = 2; j <= sqrt(num); j++)
			if (num % j == 0) {
				count--;
				break;
			}

		count++;
	}
	cout << count << endl;
}