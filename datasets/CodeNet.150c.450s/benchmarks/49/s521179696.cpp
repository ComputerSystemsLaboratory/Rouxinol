#include<iostream>
using namespace std;

int main(void) {
	int n, sum, max, min, ave,a,total;
	int i,num;

	for (;;) {
		sum = 0;
		min = 1000;
		max = 0;
		cin >> n;
		if (n == 0) {
			break;
		}
		for (i = 0; i < n; i++) {
			cin >> a;
			sum += a;
			if (max < a) {
				max = a;
			}
			if (min > a) {
				min = a;
			}

		}

		total = sum - max - min;
		num= n - 2;

		ave = total / num;

		cout << ave << endl;

	}

	return 0;
}