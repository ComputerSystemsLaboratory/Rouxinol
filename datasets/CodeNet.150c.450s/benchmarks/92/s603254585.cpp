#include <iostream>
using namespace std;

int main()
{
	unsigned int a, b, c;
	while (cin >> a >> b) {
		a += b;
		c = 0;
		do {
			a /= 10;
			c++;
		} while (a);
		cout << c << endl;
	}
    return 0;
}