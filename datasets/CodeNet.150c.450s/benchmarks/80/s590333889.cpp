#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
	int a,b,c,d;
	int wa[2];

	for (int i = 0; i < 2; i++) {
		cin >> a >> b >> c >> d;
		wa[i] = a + b + c + d;
	}
	if (wa[0] > wa[1]) {
		cout << wa[0] << endl;
	} else {
		cout << wa[1] << endl;
	}
	return 0;
}