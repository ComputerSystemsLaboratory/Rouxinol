
/* vo00_05.cpp */
#include <iostream>
using namespace std;

int euclid(long long a, long long b);

int main()
{
	int c;
	long long a, b, d;

	while (true) {
		cin >> a >> b;
		if (cin.eof()) break;

		c = euclid(a, b);
		d = a * b / c;

		cout << c << ' ' << d << '\n';
	}

	return 0;
}

int euclid(long long a, long long b)
{
	if (a < b) { int temp = a; a = b; b = temp; }

	int r;
	while (b != 0) {

		r = a % b;
		a = b;
		b = r;

	}


	return a;
}