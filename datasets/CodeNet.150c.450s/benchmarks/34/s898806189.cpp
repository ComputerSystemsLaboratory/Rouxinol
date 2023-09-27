#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n, num[30];
	num[0] = 1;
	num[1] = 2;
	num[2] = 4;
	for (int i = 3; i < 30; i++) num[i] = num[i - 3] + num[i - 2] + num[i - 1];
	while (cin >> n,n) {
		cout << (int)ceil((double)num[n - 1] / 3650.0) << endl;
	}
	return 0;
}