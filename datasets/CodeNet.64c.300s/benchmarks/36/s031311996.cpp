#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;

	int max, mid, min;
	if (a > b) {
		max = a;
		mid = b;
		if (c > a) {
			max = c;
			mid = a;
			min = b;
		} else if (c > b) {
			mid = c;
			min = b;
		} else {
			min = c;
		}
	}
	else if (b > a) {
		max = b;
		mid = a;
		if (c > b) {
			max = c;
			mid = b;
			min = a;
		} else if (c > a) {
			mid = c;
			min = a;
		} else {
			min = c;
		}
	}

	cout << min << " " << mid << " " << max << endl;
}
