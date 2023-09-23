#include <iostream>
using namespace std;

int calcLength(int a, int b) {
	return a * 2 + b * 2;
}

int calcArea(int a, int b) {
	return a * b;
}

int main() {
	int a, b;
	cin >> a >> b;
	int l = calcLength(a, b);
	int s = calcArea(a, b);
	cout << s << " " << l << endl;
	return 0;
}