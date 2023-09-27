#include <iostream>
using namespace std;

int main()
{
	int n=1, count = 0;
	int a[10000];
	while (cin >> n) {
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		int sum = 0, max = -100000;
		for (int ai = 0; ai < n; ai++) {
			sum = 0;
			for (int bi = ai; bi < n; bi++) {
				sum = sum + a[bi];
				if (sum > max) {
					max = sum;
				}
			}
		}
		if (n == 0)
			break;
		cout << max << endl;
	}
}