#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#include <cmath>

using namespace std;

int main(void) {
	int a, b;
	while (cin >> a) {
		cin >> b;
		int sum = a + b;
		int count = 1;
		while (sum / 10 > 0) {
			count++;
			sum /= 10;
		}
		cout << count << endl;
	}

	return 0;
}