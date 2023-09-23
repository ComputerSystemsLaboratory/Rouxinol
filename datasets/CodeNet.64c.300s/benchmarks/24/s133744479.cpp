#include<iostream>
using namespace std;
int main()
{	
	int c, a, b, a1, b1;
	while (cin >> c&&c != 0) {
		a = 0; b = 0;
		for (int i = 0; i < c; i++) {
			cin >> a1 >> b1;
			if (a1 > b1) {
				a += (a1 + b1);
			}
			else if (a1 < b1) {
				b += (a1 + b1);
			}
			else {
				a += a1;
				b += b1;
			}
		}
		cout << a << ' ' << b << endl;
	}
	return 0;
}
