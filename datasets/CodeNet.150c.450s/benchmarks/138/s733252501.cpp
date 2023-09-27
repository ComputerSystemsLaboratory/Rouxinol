#include <iostream>
using namespace std;

int main() {
	int a,b,c;
	cin >> a >> b;
	if (b > a) {
		b = b - a;
		a += b;
		b = a - b;
	}
	while (b != 0)
	{
		c = b;
		b = a % b;
		a = c;
	}
	cout << a << endl;
	return 0;
}