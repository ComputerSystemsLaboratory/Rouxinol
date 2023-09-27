#include <iostream>
#include <math.h>
using namespace std;
int main(void)
{
	int n, x, cou = 0;
	bool bo = true;
	double s;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x;
		s = sqrt(double(x));
		for (int j = 2; (double)j <= s; ) {
			if (x % j == 0) {
				bo = false;
				break;
			}
			if (j == 2) j++;
			else j += 2;
		}
		if (bo == true) cou++;
		else  bo = true;
	}
	cout << cou << endl;
}