#include <iostream>
using namespace std;

int main() {
	int a1, a2, a3, a4, b1, b2, b3, b4, total_a, total_b;
	cin >> a1 >> a2 >> a3 >> a4 >> b1 >> b2 >> b3 >> b4;

	total_a = a1 + a2 + a3 + a4;
	total_b = b1 + b2 + b3 + b4;

	cout << (total_a > total_b ? total_a : total_b) << endl;
	return 0;
}