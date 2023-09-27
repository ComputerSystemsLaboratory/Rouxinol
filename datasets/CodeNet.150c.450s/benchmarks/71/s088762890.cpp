#include <iostream>
using namespace std;

int main() {
	int n;

	while (cin >> n) {
		int sum = n;
		int count = 0;
		for (int a = 9; a >= 0; a--, sum = n) {
			sum -= a;
			for (int b = 9; b >= 0; b--, sum = n-a) {
				sum -= b;
				for (int c = 9; c >= 0; c--, sum = n-a-b) {
					sum -= c;
					for (int d = 9; d >= 0; d--, sum = n-a-b-c) {
						sum -= d;
						if (sum == 0) {
							count++;
						}
					}
				}
			}
		}
		cout << count << endl;
	}
	return 0;
}