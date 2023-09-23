#include <iostream>
#include <fstream>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;

int limit(int lim, int exp) {
	int res = 0;
	for (int i = 0; pow(i,exp) < lim+1; i++) {
		res = i;
	}
	return res;
}

int main(void) {
	int e;
	cin >> e;

	while (e != 0) {
		int m = 0;
		int res;
		int en = e;
		int temp;
		int z = limit(en,3);

		for (int i = 0; i < 10 && !((z-i) < 0); i++) {
			m = 0;
			en = e;

			m += z-i;
			en -= pow(z-i,3);

			temp = limit(en,2);
			m += temp;
			en -= pow(temp,2);

			temp = limit(en,1);
			m += temp;

			if (i == 0) {
				res = m;
			}
			else if (m < res) {
				res = m;
			}
		}

		temp = limit(e,2);
		if (temp < res) {
			if (pow(temp,2) == e) {
				res = temp;
			}
		}
		
		cout << res << endl;
		cin >> e;
	}
	return 0;
}