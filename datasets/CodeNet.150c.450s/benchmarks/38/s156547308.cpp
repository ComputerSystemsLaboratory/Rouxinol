#include <iostream>
#include <cmath>

using namespace std;

int aa(int x, int y, int z) {

	return ((pow(x, 2) + pow(y, 2) == pow(z, 2)) || (pow(x, 2) + pow(z, 2) == pow(y, 2)) || (pow(y, 2) + pow(z, 2) == pow(x, 2)));
}

int main() {

	int a, b[1000], c[1000], d[1000];
	bool e[1000];

	cin >> a;

	for (int i = 1; i <= a; i++)
	{
		cin >> b[i] >> c[i] >> d[i];

		e[i] = aa(b[i], c[i], d[i]);

	}

	for (int i = 1; i <= a; i++)
	{

		cout << ((e[i] != 0) ? "YES" : "NO") << endl;
	}

	return 0;
}