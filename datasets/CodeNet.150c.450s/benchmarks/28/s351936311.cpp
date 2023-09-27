#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int n, k, temp, sum = 0, bag[100000], min;
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		cin >> bag[i];
		sum += bag[i];
	}
	
	min = ceil((double)sum / k);

	int i, j;
	bool first = true, inc = false, dec = false;
	while (1) {
		i = j = 0;
		sum = 0;
		while (1) {
			if (sum + bag[i] > min) {
				sum = 0;
				j++;
			}
			else {
				sum += bag[i++];
			}

			if (i == n || j > k) {
				j++;
				break;
			}
		}

		if (j <= k) { //??§??????
			if (inc == true) {
				break;
			}
			min--;
			if (first == true) {
				dec = true;
				first = false;
			}
		}
		else {
			min++;
			if (dec == true) {
				break;
			}
			if (first == true) {
				inc = true;
				first = false;
			}
		}
	}
	cout << min << endl;

	return 0;
}