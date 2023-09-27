
#include <iostream>
using namespace std;

int main()
{
	int n, a, b, count = 0, pointX = 0, pointY = 0;
	cin >> n;
	do {
		cin >> a >> b;
		if (a > b) {
			pointX += (a + b);
		}
		else if (a < b) {
			pointY += (a + b);
		}
		else {
			pointX += a;
			pointY += b;
		}
		count++;
		if (count == n) {
			cout << pointX << " " << pointY << endl;
			pointX = pointY = count = 0;
			cin >> n;
		}
	} while (n != 0);
	return 0;
}