#include<iostream>

using namespace std;

int main() {

	int a, b, c, s, count, i, d, num,e;

	cin >> a >> b >> c;

	count = 0;
	s = 0;
	i = 0;
	num = 0;
	e = 0;

		for (i = 1; i <= c; i++) {

			d = c%i;

			if (d == 0) {

				for (e = a; e <= b; e++) {

					if (e == i) {

						num = num + 1;
					}

				}
			}

		}

	cout << num << endl;
}