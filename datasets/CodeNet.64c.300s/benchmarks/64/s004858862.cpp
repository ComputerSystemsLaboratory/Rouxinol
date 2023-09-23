#include <bits/stdc++.h>
using namespace std;

int main()
{
	int x, y;
	cin >> x >> y;
	while (true) {
		if (x > y) {
			x = x%y;
			if (x == 0) {
				cout << y << endl;
				break;
			}
		}
		else if (x < y) {
			y = y%x;
			if (y == 0) {
				cout << x << endl;
				break;
			}
		}
		else {
				cout << x << endl;
				break;
			}
		
	}
    return 0;
}