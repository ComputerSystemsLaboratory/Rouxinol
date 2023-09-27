#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	while (true) {
		int n;

		cin >> n;

		if (n == 0) {
			break;
		}

		int minx = 1000;
		int maxx = 0;
		int temp;
		int sum = 0;
		int avr;

		for (int i = 0; i < n; i++) {
			cin >> temp;

			sum += temp;

			minx = min(minx, temp);
			maxx = max(maxx, temp);
		}

		if (minx == maxx) {
			sum -= minx;
			avr = sum / (n - 1);
		}
		else {
			sum -= minx;
			sum -= maxx;
			avr = sum / (n - 2);
		}

		cout << avr << endl;
	}

	return 0;
}