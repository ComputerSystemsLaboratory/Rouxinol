#include <iostream>
using namespace std;

int main()
{	
	int n;

	cin >> n;

	for (int i = 0; i < n; i++) {
		int a, b = 0, c = 0;
		bool f = 1;
		for (int j = 0; j < 10; j++) {
			cin >> a;

			if (a > b && ((a > c && b >= c) || a < c))
				b = a;
			else if (a > c && ((a > b && b < c) || a < b))
				c = a;
			else {
				f = 0;
				break;
			}
		}

		if (f)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}

	return 0;
}

