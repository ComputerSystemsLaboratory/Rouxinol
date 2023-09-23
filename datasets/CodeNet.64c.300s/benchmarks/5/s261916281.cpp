#include<iostream>
using namespace std;
int main() {
	int height[10], i, a=0, b=0, c=0;
	for (i = 0; i < 10; i++) {
		cin >> height[i];
	}
	for (i = 0; i < 10; i++) {
		if (height[i] >= a) {
			c = b;
			b = a;
			a = height[i];
		}
		else if (height[i] >= b) {
			c = b;
			b = height[i];
		}
		else if (height[i] >= c) {
			c = height[i];
		}
	}
	cout << a << endl << b << endl << c << endl;
	return 0;
}