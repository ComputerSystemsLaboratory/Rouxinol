#include <iostream>

using namespace std;

int main() {
	int a[500] = { 0 }, b[500] = { 0 }, sum[500] = { 0 }, d[500] = { 0 }, k[500] = { 0 };
	int i = 0;
	while (1) {
		cin >> a[i] >> b[i];
		if (a[i] == 0 && b[i] == 0)break;
		sum[i] = a[i] + b[i];
		while (sum[i]) {
			sum[i] /= 10;
			k[i]++;
		}
		i++;
	}
	for (int j = 0; j <i;j++) {
		cout << k[j] << endl;
	}
	return 0;
}