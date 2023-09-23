#include <iostream>
using namespace std;

int main() {
	while (1) {
		int all = 0 , rem = 0, count = 0, tmp  = 0;
		cin >> all;
		if (all == 0)
			break;
		rem = 1000 - all;
		if (rem >= 500) {
			count = count + 1;
			rem = rem - 500;
		}
		if (rem >= 100) {
			tmp = rem / 100;
			count = count + tmp;
			rem = rem - (100 * tmp);
		}
		if (rem >= 50) {
			tmp = rem / 50;
			count = count + tmp;
			rem = rem - 50 * tmp;
		}
		if (rem >= 10) {
			tmp = rem / 10;
			count = count + tmp;
			rem = rem - 10 * tmp;
		}
		if (rem >= 5) {
			tmp = rem / 5;
			count = count + tmp;
			rem = rem - 5 * tmp;
		}
		count = count + rem;
		cout << count << endl;
	}
	return 0;
}